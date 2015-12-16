#!/bin/bash

#sed -i 's/worker_processes/#worker_processes/' /opt/adx/source/center/conf/nginx.conf
#sed -i 's/worker_cpu_affinity/#worker_cpu_affinity/' /opt/adx/source/center/conf/nginx.conf
#sed -i 's/dbname=ssp/dbname=ssp_online/' /opt/adx/source/center/conf/nginx.conf
sed -i 's/10.100.56.30:3306/127.0.0.1:3306/' /opt/adx/source/center/conf/nginx.conf
sed -i 's/user=yes-select/user=root/' /opt/adx/source/center/conf/nginx.conf
sed -i 's/password=bEog5y8UOK0C/password=sunbx/' /opt/adx/source/center/conf/nginx.conf



sed -i 's/10.100.51.125/127.0.0.1/' /opt/adx/source/center/src/lua/redis_conf.lua


sed -i 's/ngx.sleep(1)/ngx.sleep(0)/' /opt/adx/source/center/src/lua/relativeOptions.lua


#sed -i 's/worker_processes/#worker_processes/' /opt/adx/source/openresty/conf/yes.conf
#sed -i 's/worker_cpu_affinity/#worker_cpu_affinity/' /opt/adx/source/openresty/conf/yes.conf
#sed -i 's/#    lua_code_cache off/lua_code_cache off/' /opt/adx/source/openresty/conf/yes.conf

sed -i 's/10.100.56.30:3306/127.0.0.1:3306/' /opt/adx/source/openresty/conf/yes_manager.conf
#sed -i 's/dbname=ssp/dbname=ssp_online/' /opt/adx/source/openresty/conf/yes_manager.conf
sed -i 's/user=yes-sys/user=root/' /opt/adx/source/openresty/conf/yes_manager.conf
sed -i 's/password=Jst6CBRGluPs/password=sunbx/' /opt/adx/source/openresty/conf/yes_manager.conf


sed -i 's/10.100.51.125/127.0.0.1/' /opt/adx/source/openresty/src/lua/url_conf.lua
sed -i 's/10.103.188.120/127.0.0.1:9000/' /opt/adx/source/openresty/src/lua/url_conf.lua
sed -i 's/10.103.188.119/127.0.0.1:9000/' /opt/adx/source/openresty/src/lua/url_conf.lua

