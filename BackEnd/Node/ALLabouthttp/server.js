const http = require('http')

const server=http.createServer((req,res)=>{
    console.log(req.method)
    console.log(req.url)
    //res.writeHead(status code , key : value pair)
    res.writeHead(200,{'content-type':'text/html'})
    res.end("<h1>Home Page</h1>")
    console.log("User hit the server")
})

server.listen(67)