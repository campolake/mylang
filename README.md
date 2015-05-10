# 动态语言的一个简单实现

roadmap如下
第一步：实现以下语言特性
--
跟javascript更像一些，结合lua的一些优点
* 1、表达式求值
* 2、函数调用
* 3、if else 
* 4、for循环
* 5、switch
* 6、实现三个调用：
	标准输出printf
	文件读写file
	socket通信 socket
* 7、从ast开始执行

第二步：
--
1、加入IL，后端执行IL，采用面向寄存器的三地址指令格式
2、加入包机制
3、加入jit和gc，兼容llvm后端

第三步：引入闭包和函数式编程方式
--

第四步：优化
--
优化性能 VS  lua  & python
引入多线程
实现一个调试器
错误提示优化
简单的库实现包括 string、dictionary、hashmap、tree,常用的算法封装

第五步：实现一个httpserver和mvc框架，参考nginx
--
并简单的实现一个nosql，可以快速的支持持久化操作，前后台用json通信。
 

使用方式： mylang  main.la

参考资料
--
1、http://www.lua.org/ 和云风的lua源码阅读
2、自制编程语言
3、程序设计语言实践之路
4、Getting Started with the LLVM System http://llvm.org/docs/GettingStarted.html  