nginx 模块开发文档

1. nginx是一个非常优秀的事件驱动框架,nginx不仅仅用于web服务器,非常适合开发在传输层以tcp对外提供服务的服务器程序.

2. nginx将网络磁盘及定时器等异步事件的驱动都做了非常好的封装,基于它开发将可以忽略这些事件处理的细节.

3. nginx封装了许多平台无关的接口,容器适用于跨平台开发.

4. 优秀的模块化设计.在进程管理上相当出色.nginx对各个操作系统做了大量优化,尤其linux系统.

5. nginx需要linux的内核做一些优化来支持其更好适应业务.

6. configure除了寻找依赖的软件外,还针对不同unix做了大量优化.

7. nginx_module.c文件就是用来定义ngx_module数组的.该数组指明了每个模块在nginx中的优先级,当一个请求符合多个模块的处理规则时,将按照它们在该数组中的顺序最靠前的模块优先处理.HTTP过滤模块相反.

8. nginx的数据结构尽量少用内存.

9. nginx使用nginx_int_t封装有符号整形,使用nginx_uint_t封装无符号整形.

10. 将自己的http模块编译进入nginx的方式:
    a->把源代码全部放到一个目录下,同时在该目录下编写文件config通知nginx如何编译本模块.
    b->在configure执行时加入参数--add-module=PATH(PATH为上面的config的目录)就可以正常编译该模块了.

11. 在执行完configure脚本,nginx回生成objs/Makefile和objs/nginx_modules.c文件.通过这两个文件的修改也可以实现将自己的模块添加到nginx中.

12. config文件(是个可执行的shell脚本)的写法:(以开发http模块为例说明)
    a: 需要定义ngx_addon_name :设置为模块名称
    b: HTTP_MODULES: 保存所有的http模块名称.
    c:NGX_ADDON_SRCS: 用于指定新增模块的源代码,多个待编译的源代码间以空格符连接.在设置该变量时可以使用$ngx_addon_dir变量,等于configure时--add-module时的PATH参数.

13. nginx http 模块接入nginx处理用户请求流程:
    a: worker进程会在一个for循环里反复调用事件模块检测网络事件.检测到客户端发起tcp请求时会为它建立tcp连接,然后根据配置交由http框架处理.
    b: http框架会试图接收完整的HTTP头部,并在接收到完整的http头部后将请求分发到具体的http模块中处理.
    c: http模块在处理请求结束后,大多会向客户端发送响应.此时会依次调用所有的http过滤模块.每个过滤模块根据配置决定自己的行为.

14. nginx模块需要使用c或者c++实现.每个模块需要一个名字,nginx有约定俗成的命名规则.如ngx_http_mytest_module

15. 为了让http模块正常工作需要将模块编译进入nginx,然后设置模块如何在运行中生效.

16. nginx_str_t结构包含字符串指针和字符串长度.可以对一个固定字符串进行分解引用.减少内存使用.

17. ngx_list_t结构是nginx封装的链表容器.
    typedef struct ngx_list_part_s ngx_list_part_t;
    struct ngx_list_part_s {
        void *elts; //指向数组的起始地址
        ngx_uint_t nelt; //表示数组中已经使用了多少个元素.
        ngx_list_part_t *next; //下一个链表元素的地址
    }

    typedef struct {
        ngx_list_part_t *last;//指向链表的最后一个数组元素
        ngx_list_part_t part;//链表的首个数组元素
        size_t size; // size 限制每一个数组元素占用的空间大小
        ngx_uint_t nalloc; // 表示每个ngx_list_part_t数组的容量.
        ngx_pool_t *pool; // 链表中管理的内存分配的内存池对象
    } ngx_list_t;

    nginx提供的接口包括:创建一个新的链表,初始化一个已有的链表,添加新的元素.

18. ngx_table_elt_t 结构:
    typedef struct {
            ngx_uint_t hash;
            ngx_str_t key;
            ngx_str_t value;
            u_char *lowcase_key;
    } ngx_table_elt_t;


19. ngx_buf_t是nginx处理大数据的关键数据结构,既应用于内存数据也应用于磁盘数据.
    typedef struct ngx_buf_s ngx_buf_t;
    typedef void * ngx_buf_tag_t;
    struct ngx_buf_s {
        u_char *pos;
        u_char *last;
        off_t file_pos;
        off_t file_last;
        u_char *start;
        u_char *end;
        ngx_buf_tag_t tag;
        ngx_file_t *file;
        ngx_buf_t *shadow;
        unsigned temporary:1;
        ...
        ...
    }

20. http模块的数据结构:
    ngx_module_t ngx_http_mytest_module;

    typedef struct ngx_module_s ngx_module_t;
    struct ngx_module_s {
        /* 下面的ctx_index, index, spare0, spare1,spare2, spare3, version变量不需要在定义时赋值,可以用nginx准备好的宏NGX_MODULE_V1来定义,它已经定义好了这7个值.
        #define NGX_MODULE_V1 0,0,0,0,0,0,1;
        对于一类模块而言,由下面的type成员决定类型.ctx_index表示当前模块在这类模块中的序号.这个成员常常是由管理这类模块的一个nginx核心模块设置的.对于
        所有的HTTP模块而言,ctx_index是由核心模块ngx_http_module设置的.
        ngx_uint_t ctx_index;

        /* index 表示当前模块在ngx_modules数组中的序号.nginx启动时候会根据ngx_modules数组设置各模块index值.
        ngx_uint_t index;

        //spare系列的保留变量,暂未使用
        ngx_uint_t spare0;
        ngx_uint_t spare1;
        ngx_uint_t spare2;
        ngx_uint_t spare3;

        //模块的版本,便于将来扩展.目前只有一种,默认为1.
        ugx_uint_t version;

        /* ctx用于指向一类模块的上下文结构体.
        void *ctx;

        // conmmands将处理nginx.conf中的配置项.
        ngx_command_t   *commands;

        /* type表示该模块的类型,与ctx指针紧密相关.在官方nginx中取值范围为以下5种:NGX_HTTP_MUDULE NGX_CORE_MODULE, NGX_CONF_MODULE, NGX_EVENT_MODULE, NGX_MAIL_MODULE
        ngx_uint_t type;

        /* 在nginx启动停止过程中,以下7个函数指针表示有7个执行点会分别调用这7中方法.对于任何一个方法,如果不需要nginx在某个时刻执行它,可以简单的将它设为空指针.

        /*master进程启动时回调init_master,目前框架代码从来不会调用它.
        ngx_int_t (*init_master) (ngx_log_t *log)

        /* init_module 方法在初始化所有模块时调用.在master/worker模式下,这个阶段将在启动worker子进程前完成.
        ngx_int_t (*init_module)(ngx_cycle_t *cycle);

        /* init_process 方法在正常服务前被调用.master/worker模式下,多个worker子进程已经产生,在每个worker进程初始化过程中会调用所有模块的init_process函数.
        ngx_int_t (*init_process) (ngx_cycle_t *cycle);

        /* nginx暂时不支持多线程,所以init_thread在框架代码中从未被调用过.设为NULL
        ngx_int_t (*init_thread)(ngx_cycle_t *cycle);

        /* 同上,exit_thread 也不支持,设为NULL
        void (*exit_thread)(ngx_cycle_t *cycle);

        /* exit_process 在服务停止前调用.在master/worker模式下worker进程会在退出前调用它*/
        void (*exit_porcess)(ngx_cycle_t *cycle);

        //exit_master将在master进程退出前调用
        void (*exit_master) (ngx_cycle_t *cycle);

        /* 以下8个spare_hook变量也是保留字段,目前没有使用,但可用nginx提供的NGX_MODULE_V1_PADDING宏来填充.该宏的定义:#define NGX_MODULE_V1_PADDING 
        0,0,0,0 ,0,0,0,0*/
        uintptr_t   spare_hook0;
        uintptr_t   spare_hook1;
        uintptr_t   spare_hook2;
        uintptr_t   spare_hook3;
        uintptr_t   spare_hook4;
        uintptr_t   spare_hook5;
        uintptr_t   spare_hook6;
        uintptr_t   spare_hook7;
    };


21. 对于init_module init_process exit_process exit_master 调用它们的是nginx的框架代码.通常开发http模块时候将它们设为NULL指针.

22. 定义http模块时最重要的是设置ctx和commands.ctx指针必须指向ngx_http_module_t接口.

23. nginx在读取重载配置文件时定义了ngx_http_module_t接口描述的8个阶段.HTTP框架在启动过程中会在每个阶段调用ngx_http_module_t中的相应方法.当回调方法为NULL时,
    HTTP框架不会调用它.

    typedef struct {
        //解析配置文件前调用
        ngx_int_t (*preconfiguration)(ngx_conf_t *cf);
        //完成配置文件的解析后调用
        ngx_int_t (*postconfiguration)(ngx_conf_t *cf);

        /* 当需要创建数据结构用于存储main级别(直属于http{}块的配置项)的全局配置项时,可以通过create_main_conf回调方法创建存储全局配置项的结构体.
        void *(*create_main_conf)(ngx_conf_t *cf);

        //常用于初始化main级别的配置项
        char *(*init_main_conf)(ngx_conf_t *cf, void *cf);

        //当需要创建数据结构用于存储srv级别(直属于虚拟主机server{}级别的配置项),可以通过create_srv_conf回调方法创建存储srv级别配置项的结构体
        void *(*create_srv_conf)(ngx_conf_t *cf);

        // merge_srv_conf回调方法主要用于合并main级别hesrv级别下的同名配置项.
        char * (*merger_srv_conf)(ngx_conf_t *cf, void *prev, void *conf);

        //当需要创建数据结构用于存储loc级别(直属location{}级别的配置项),可以通过create_loc_conf回调方法创建存储srv级别配置项的结构体
        void *(*create_loc_conf)(ngx_conf_t *cf);

        // merge_loc_conf回调方法主要用于合并srv级别和loc级别下的同名配置项.
        char * (*merger_loc_conf)(ngx_conf_t *cf, void *prev, void *conf);
    } ngx_http_module_t;

    8个阶段的调用顺序与上述定义的顺序是不同的.nginx启动过程中HTTP框架调用这些方法的实际顺序有可能是这样的:(与nginx.conf的配置项有关)
        1) create_main_conf
        2) create_srv_conf
        3) create_loc_conf
        4) preconfiguration
        5) init_main_conf
        6) merge_srv_conf
        7) merge_loc_conf
        8) postconfiguration

24. commands数组用于定义模块的配置文件参数.每个数组元素都是ngx_command_t类型.数组结尾用ngx_null_command表示.

25. nginx在解析配置文件中的一个配置项时,首先会遍历所有模块,对每个模块,即遍历commands数组进行.在数组中检查到ngx_null_command时,会停止使用当前模块解析
    该配置项.每个ngx_command_t结构体定义一个配置项.

26. typedef struct ngx_command_s ngx_command_t;
    struct ngx_command_s {
        //配置项名称,如"gzip"
        ngx_str_t name;

        /*配置项类型,type将指定配置项可以出现的位置.如出现在server{}或location{}中,以及它可以携带的参数个数*/
        ngx_uint_t type;

        //出现了name中的指定配置项后,会调用set方法处理配置项参数
        char *(*set)(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

        // 在配置文件中的偏移量
        ngx_uint_t conf;

        /* 通常用于使用预设的解析方法解析配置项,需要与conf配合使用
        ngx_uint_t  offset;

        //配置项读取后的处理方法,必须是ngx_conf_post_t 结构的指针
        void *post;
    };
    ngx_null_command 只是一个空的ngx_command_t,如下所示:
    #define ngx_null_command {ngx_null_string, 0, NULL,0,0, NULL}


27. nginx的http框架定义了非常多的方法,有很大的自由来定义自己的模块如何接入HTTP请求的处理.

28. 当nginx接收完HTTP请求的头部信息时,就会调用HTTP框架处理请求.HTTP框架共定义了11个阶段(第三方模块只能介入其中的7个阶段处理请求)
    typedef enum {
        // 在接收到完整的HTTP头部后处理的HTTP阶段
        NGX_HTTP_POST_READ_PHASE = 0;

        /* 在还没有查询到URI匹配的location前,这是rewrite重写URL也作为一个独立的HTTP阶段*/
        NGX_HTTP_SERVER_REWRITE_PHASE;

        /* 根据URI寻找匹配的location,这个阶段通常由ngx_http_core_module模块实现,不建议其他HTTP模块重新定义这一阶段的行为.
        NGX_HTTP_FIND_CONFIG_PHASE;

        /* 在NGX_HTTP_FIND_CONFIG_PHASE阶段后重写URL的意义与NGX_HTTP_SERVER_REWRITE_PHASE阶段不同,这两者会导致查找到不同的location块.
        NGX_HTTP_REWRITE_PHASE;

        /* 这一阶段用于在rewrite重写url后重新跳刀NGX_HTTP_FIND_CONFIG_PHASE阶段,找到与新的uri匹配的location.这一阶段无法由第三方http模块处理,仅由
        ngx_http_core_module模块使用.
        NGX_HTTP_POST_REWRITE_PHASE;

        //处理NGX_HTTP_ACCESS_PHASE阶段前,http模块可以介入的处理阶段.
        NGX_HTTP_PREACCESS_PHASE;

        /* 这个阶段用于让HTTP模块判断是否允许这个请求访问nginx服务器.
        NGX_HTTP_ACCESS_PHASE;

        /* 当NGX_HTTP_ACCESS_PHASE阶段中HTTP模块的handler处理方法返回不允许访问的错误码时(实际是NGX_HTTP_FORBIDDEN或者NGX_HTTP_UNAUTHORIZED),这个阶段
        将负责构造拒绝服务的用户响应.
        NGX_HTTP_POST_ACCESS_PHASE;

        /* 这个阶段完全是为了try_files配置项设置的.当http请求访问静态文件资源时,try_files配置项可以使这个请求顺序的访问多个静态文件资源.如果某一次访问失败
        则继续访问try_files中指定的下一个静态资源.另外这个功能完全实在NGX_HTTP_TRY_FILES_PHASE阶段实现的.
        NGX_HTTP_TRY_FILES_PHASE;

        //用于处理HTTP请求内容阶段
        NGX_HTTP_CONTENT_PHASE;

        /* 处理完请求后日志记录阶段.例如,ngx_http_log_module模块就在这个阶段加入了一个handler方法,使得每个HTTP请求处理完毕后会记录access_log日志*/
        NGX_HTTP_LOG_PHASE;

    } ngx_http_phases;


29. 请求调用handler方法传入的ngx_http_request_t类型参数,返回ngx_int_t
    返回码可以是HTTP响应包中的返回码,其中包括了HTTP框架已经在/src/http/ngx_http_request.h文件中定义好的宏.
    在处理方法中除了返回HTTP响应码外,还可以返回nginx全局定义的几个错误码:这些错误码对于nginx提供的大部分方法都是通用的.

    请求的所有信息都可以从ngx_http_rquest_t类型的参数r中取得.

30. nginx为用户提供了配置项解析机制.

31. http 配置项的使用场景
    a: 处理http配置项可以分为4个步骤:
        i:创建数据结构用于存储配置项对应的参数
        ii:设定配置项在nginx.conf中出现时的限制条件与回调方法
        iii:实现第二步中的回调方法,或者使用nginx框架预设的14个回调方法
        iiii:合并不同级别 的配置

