// +build linux freebsd

package daemon

import (
	"net"

	"github.com/docker/docker/opts"
	flag "github.com/docker/docker/pkg/mflag"
	runconfigopts "github.com/docker/docker/runconfig/opts"
	"github.com/docker/go-units"
)

var (
	defaultPidFile = "/var/run/docker.pid"
	defaultGraph   = "/var/lib/docker"
	defaultExec    = "native"
)

// Config defines the configuration of a docker daemon.
type Config struct {
	CommonConfig

	// Fields below here are platform specific.

	CorsHeaders          string
	EnableCors           bool
	EnableSelinuxSupport bool
	RemappedRoot         string
	SocketGroup          string
	CgroupParent         string
	Ulimits              map[string]*units.Ulimit
}

// bridgeConfig stores all the bridge driver specific
// configuration.
type bridgeConfig struct {
	EnableIPv6                  bool
	EnableIPTables              bool
	EnableIPForward             bool
	EnableIPMasq                bool
	EnableUserlandProxy         bool
	DefaultIP                   net.IP
	Iface                       string
	IP                          string
	FixedCIDR                   string
	FixedCIDRv6                 string
	DefaultGatewayIPv4          net.IP
	DefaultGatewayIPv6          net.IP
	InterContainerCommunication bool
}

// InstallFlags adds command-line options to the top-level flag parser for
// the current process.
// Subsequent calls to `flag.Parse` will populate config with values parsed
// from the command-line.
func (config *Config) InstallFlags(cmd *flag.FlagSet, usageFn func(string) string) {
	// First handle install flags which are consistent cross-platform
	config.InstallCommonFlags(cmd, usageFn)

	// Then platform-specific install flags
	cmd.BoolVar(&config.EnableSelinuxSupport, []string{"-selinux-enabled"}, false, usageFn("Enable selinux support"))
	cmd.StringVar(&config.SocketGroup, []string{"G", "-group"}, "docker", usageFn("Group for the unix socket"))
	config.Ulimits = make(map[string]*units.Ulimit)
	cmd.Var(runconfigopts.NewUlimitOpt(&config.Ulimits), []string{"-default-ulimit"}, usageFn("Set default ulimits for containers"))
	cmd.BoolVar(&config.Bridge.EnableIPTables, []string{"#iptables", "-iptables"}, true, usageFn("Enable addition of iptables rules"))
	cmd.BoolVar(&config.Bridge.EnableIPForward, []string{"#ip-forward", "-ip-forward"}, true, usageFn("Enable net.ipv4.ip_forward"))
	cmd.BoolVar(&config.Bridge.EnableIPMasq, []string{"-ip-masq"}, true, usageFn("Enable IP masquerading"))
	cmd.BoolVar(&config.Bridge.EnableIPv6, []string{"-ipv6"}, false, usageFn("Enable IPv6 networking"))
	cmd.StringVar(&config.Bridge.IP, []string{"#bip", "-bip"}, "", usageFn("Specify network bridge IP"))
	cmd.StringVar(&config.Bridge.Iface, []string{"b", "-bridge"}, "", usageFn("Attach containers to a network bridge"))
	cmd.StringVar(&config.Bridge.FixedCIDR, []string{"-fixed-cidr"}, "", usageFn("IPv4 subnet for fixed IPs"))
	cmd.StringVar(&config.Bridge.FixedCIDRv6, []string{"-fixed-cidr-v6"}, "", usageFn("IPv6 subnet for fixed IPs"))
	cmd.Var(opts.NewIPOpt(&config.Bridge.DefaultGatewayIPv4, ""), []string{"-default-gateway"}, usageFn("Container default gateway IPv4 address"))
	cmd.Var(opts.NewIPOpt(&config.Bridge.DefaultGatewayIPv6, ""), []string{"-default-gateway-v6"}, usageFn("Container default gateway IPv6 address"))
	cmd.BoolVar(&config.Bridge.InterContainerCommunication, []string{"#icc", "-icc"}, true, usageFn("Enable inter-container communication"))
	cmd.Var(opts.NewIPOpt(&config.Bridge.DefaultIP, "0.0.0.0"), []string{"#ip", "-ip"}, usageFn("Default IP when binding container ports"))
	cmd.BoolVar(&config.Bridge.EnableUserlandProxy, []string{"-userland-proxy"}, true, usageFn("Use userland proxy for loopback traffic"))
	cmd.BoolVar(&config.EnableCors, []string{"#api-enable-cors", "#-api-enable-cors"}, false, usageFn("Enable CORS headers in the remote API, this is deprecated by --api-cors-header"))
	cmd.StringVar(&config.CorsHeaders, []string{"-api-cors-header"}, "", usageFn("Set CORS headers in the remote API"))
	cmd.StringVar(&config.CgroupParent, []string{"-cgroup-parent"}, "", usageFn("Set parent cgroup for all containers"))
	cmd.StringVar(&config.RemappedRoot, []string{"-userns-remap"}, "", usageFn("User/Group setting for user namespaces"))

	config.attachExperimentalFlags(cmd, usageFn)
}
