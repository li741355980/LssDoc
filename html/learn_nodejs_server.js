/*
 这是一个node.js 写的服务端程序
 
 node.js有很多模块，使用npm install [模块名] 或者npm install [模块名] -g安装模块
 
 两各命令区别在于模块路径的安装不同，前者安装在 $NPMPATH/node_modules下
 后者在/usr/local/lib/node_modules下
 
*/

var http = require('http'); //模块引入

http.createServer(function (req,res) {
    res.writeHead(200,{'Content-Type':'text/plain'});
    
    res.end('hello world \n');
}).listen(8888);

console.log('Server running at http://127.0.0.1:8888/');

/*
    使用node命令运行服务端程序
    
    node learn_nodejs_server.js
    
    然后在浏览器中访问127.0.0.1:8888
*/