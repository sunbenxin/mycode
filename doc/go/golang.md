1. 注释
    a: 行注释  // 被编译器当做一个换行符
    b: 块注释  /* */
        i): 只占用一行,编译器把它当做空格
        ii): 占用多行当做换行符

2. 标识符
    a: 同c
    b: Go语言预定义了许多标识符,可以定义与这些标识符一样但不提倡.
    c: 区分大小写
    d: 以大写字母开头的标识符是可导出的,任何其他标识符都是私有的.
    e: 包名约定为全小写
    f: 空标识符是一个占位符("_"),不是一个新的变量.

3. 常量和变量
    a: 常量使用关键字const声明,变量使用关键字var声明.
    b: 整形字面量Go推断为int,浮点型字面量Go推断为float64,复数字面量Go推断为complex128.
    c: 通常不去显示声明类型,除非使用Go语言无法推断的特殊类型.
    d: 指定类型的数值常量只可用于别的数值类型相同的表达式中.未指定类型的数值常量可以用于别的数值类型为任何内置类型的表达式中.
    e: 如果没有显示初始化,Go语言总是会将0值赋值给该变量.这保证了Go程序免收未初始化的垃圾值之灾.
    f: 枚举语法可以使声明的常量值不同,iota在分组内顺序递增.

4. 布尔值和布尔表达式
    a: Go语言提供了内置的布尔值,true和false
    b: Go语言支持标准的逻辑和比较操作,这些操作的结果都是布尔值
    c: 二元逻辑操作符占用短路逻辑.
    d: 以比较操作符进行比较的值类型必须相同,或者是实现了相同接口类型的接口.
    e: == 和!= 可用于任何可以比较的类型,包括数组和结构体.只要它们的元素和成员变量与== 和!= 操作符相兼容.不能用于比较贴片.
        可以比较两个指针或接口,或者将指针,接口,引用与nil比较
    f: < <= >= 和> 只适用于数字和字符串.

5. 数值类型
    a: 通常将类型转换为最大类型以防止精度丢失
    b: x++:为x加上一个无类型常量1
    c: Go语言优先级规则比较合理,但仍推荐使用括号保证清晰的含义

6. 整形
    a: Go提供了11种整形,5种有符号的和5种无符号的,外加一种存储指针的整形类型.
    b: Go语言允许使用byte来作为无符号uint8类型的同义词,并且使用单个字符(及uniode码点)的时候使用rune来代替int32.
    c: 大多数情况下,只需要一种整形即int,用于循环计数器.数组切片索引,及任何通用目的的整形运算符.通常该类型处理速度也是最快的.

7. 大整数
    a: 超过int64和uint64位数字不能用浮点数表示,因为它们表示的是近似值.

8. map
    a: key 是所有完全定义了== 与!= 操作的类型
    b: 声明
        var numbers map[string] int
      or
        numbers := make(map[string]int)

    c: 无序的
    d: 长度不固定,引用类型
    e: len函数可以返回map中的key数量
    f: rating := map[string]float32 {"c":5, "Go":4.5}
    g: map有两个返回值,第二个返回值,如果不存在key,ok为false,存在ok为true.
        cssharpRating, ok := rating["c#"]
    h: 删除一个元素
        delete(rating, "c")
    i: 如果两个map指向同一个底层,一个改变另一个也改变.

9. Go支持嵌套数组

10. slice
    a: 是一个指向底层array的引用类型
    b: 声明可以和array一样,只是不需要长度
    c: slice可以从一个数组或一个已经存在的slice中再次声明.
    d: slice是一个包含指针,指定长度,最大长度(开始位置到数组最后位置的长度,可声明)
    e: len获取slice的长度
        cap获取slice的最大容量
        append向slice里面追加一个或多个元素,然后返回一个和slice一样类型的slice
        copy函数copy从源slice的src中复制元素到目标dst并且返回复制元素的个数

11. 分组声明
    a: 定义  var arr [n] type
    b: 数组操作通过 []来进行
    c: 数组包换长度,且不能改变,是一种类型
    d: 数组赋值是值赋值.
    e: 声明
        i)  a := [3]int{1,2,3}
        ii) a := [10] int {1,2,3} (其他默认为0)
        iii) a := [...] int {4,5,6} Go自动根据元素个数计算长度

12.分组声明
    a: 用于同时声明多个常量,变量,或导入多个包
    b: import (
        "fmt"
        "os"
    )

13. 错误类型
    a: 内置的error类型,专门用来处理错误信息
    b: Go的包里有一个专门的包errors用来处理错误

14. go程序是通过包来组织的
    package <packagename> 告诉我们当前文件属于哪个包
    包名main告诉我们他是一个可独立运行的包,编译后会产生可执行文件.除了main包外,其他包最后都会生成*.a文件

15. 每一个可独立运行的go程序,必须包含一个package main, 在这个main包中必定包含一个入口函数main,该函数既无参数也无返回值

16. go使用utf-8 字符串和标识符,天生具有多语言支持.
