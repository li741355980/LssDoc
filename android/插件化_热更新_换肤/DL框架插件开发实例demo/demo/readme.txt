1 lib项目是DL框架源代码，因此是个lib工程，编译的时候会生成jar在/build/libs路径下（task buildLib的作用）

2 里面有两个插件工程，一个是插件不依赖宿主（main），一个是插件依赖宿主(doi)（其实就是插件调用了宿主工程的某些对象的函数（接口调用方式））

3 使用方式，先将host编译导入手机，然后cd到插件工程目录下用 gradle build命令生成APK 再用命令 gradle uploadDebug将APK导入手机(task uploadDebug 的作用)


/***********************************/
修复lib库加载so库出现异常问题（1 inputstream一次读取太多字节，2 异步问题导致zipfile可能先于复制任务关闭）

2014/03/02