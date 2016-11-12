/*
    对一个模块外部开放的类对象用 exports
}
*/

function HelloClazz(){
    var name;
    this.setName=function(setname){
        name=setname;
    };
    this.sayHello= function(){
        console.log('hello '+name);
    };
}
module.exports = HelloClazz;