/*
    模块对于node.js来说就是一个文件，可能是js json 编译过的c/c++扩展等文件
*/
var Hello = require('./module_class.js');
var hello0 = require('./module_api.js');

hello=new Hello();
hello.setName('class');
hello.sayHello();

hello0.world();

