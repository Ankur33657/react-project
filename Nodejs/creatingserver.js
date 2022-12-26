var http = require('http');
http.createServer(function (req,res){
    res.write("Hello Ankur");
    res.end();
}).listen(8080);
console.log("Server running at 8080 port");
