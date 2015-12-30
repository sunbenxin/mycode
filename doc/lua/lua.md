#lua5.2
1. lua 作为一个动态语言，提供了一个虚拟机。
2. lua代码最终是以字节码形式由虚拟机解释执行的。
3. 通过预编译字节码的加载器把外部组织好的代码置入内存让虚拟机运行。
4. lua官方版本提供了一些库，并提供一些列C API，供第三方开发。
5. lua 使用clean c编写的源代码，大部分模块分解在不同的.c文件中，以同名的.h文件描述导出的接口.
6. lua的内部模块暴露出来的API以luaX_xxx风格命名,即lua后跟一个大写字母标示内部模块名,而后由下划线外加小写字母描述方法名.
7. 供外部程序使用的API则使用lua_xxx的命名风格,定义在lua.h文件中.
8. 供库开发用的luaL系列API定义在lauxlib.h中,其他都属于内部API.禁止供外部程序使用.
9. lua核心部分仅包含Lua虚拟机的运转,lua虚拟机的行为由一组组opcode控制,定义在lopcode.h和lopcode.c中.虚拟机对opcode的解析和运作在lvm.c中,其API以luaV为前缀.
10. lua虚拟机的外在数据形式是一个lua_State结构体,全局state引用了整个虚拟机的所有数据.全局state的相关代码放在lstate.c中,API使用luaE为前缀.
11. 函数的调用及返回放在ldo.c中,相关API以luaD为前缀.
12. 类型function,string,table在lfun.c ltable.c lstring.c中.这三组内部API分别以luaF,luaS,luaH 为前缀命名.
13. 不用数据类型被同意定义为Lua Object.相关操作在lobject.c中,API以luaO为前缀.
14. lua元表在ltm.c中,API以luaT为前缀.
15. 核心系统还用到两个基础设施: 内存管理lmem.c API以luaM为前缀,带缓冲的流处理lzio.c,API以luaZ为前缀.
16. lgc.c中实现了垃圾回收部分,API以luaC为前缀.
17. lua设计初衷就是为了最好的和宿主系统结合,作为一门嵌入式语言必须提供和宿主系统交互的API,这些API以C函数的形式提供,大多数实现在lapi.c中.API直接以lua为前缀.可供C编写的程序库直接使用.
18. 通过lua的parser在lparser.c实现(luaY为前缀的API)及词法分析llex.c(luaX为前缀API)得到内部数据结构(常量和opcode集合)
19. 文本代码通过解析利用lcode.c(API以luaK为前缀)中的处理最终生成虚拟机理解的数据.
20. 为了满足某些需要加快代码翻译流程,可以采用预编译的过程,把运行时编译的结果生成为字节码.这个过程及逆过程由ldump.c和lundump.c实现.API以luaU为前缀.
21. 主动加载内建库到lua_State中,是由在lualib.h中的API实现的.
22. 内建库的初始化API在linit.c中实现,模块管理机制在loadlib.c中找到实现.其他基础库可以在以lib.c为后缀的源文件中找到实现.
23. lua.c实现了独立解析器,luac.c实现了一个简单的字节码编译器.
24. 不同的lua虚拟机对象是线程安全的,因为一切和虚拟机相关的内存操作都被关联到虚拟机对象中,没有利用任何其他共享变量.
25. lua虚拟机的核心部分没有任何的系统调用,正确使用lua不会对系统造成任何干扰.
26. lua让用户自定义内存管理器,在创建lua虚拟机时候传入,保证了lua的整个运行状态是用户可控的.
