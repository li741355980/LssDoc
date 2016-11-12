var events = require('events');

var eventEmitter= new events.EventEmitter();

var connectHandler = function connected(){
    console.log('连接成功');
    eventEmitter.emit('data_received','null');
}

eventEmitter.on('connection',connectHandler)//事件注册

eventEmitter.on('data_received',function(data){
    console.log('数据接收成功'+data);
})

eventEmitter.emit('connection')//事件处理


var listener=function lis(){
    console.log("lis 连接成功");
} 
eventEmitter.addListener('connection',listener);
 console.log("------------------------");
eventEmitter.emit('connection')//事件处理
 console.log("------------------------");
eventEmitter.removeListener('connection',listener);
eventEmitter.emit('connection')//事件处理