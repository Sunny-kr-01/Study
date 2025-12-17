//server also listens for events
const http=require('http')

const server=http.createServer()

server.on('request',(req,res)=>{
    res.end("Welcome")
})
server.on('click',(req,res)=>{
    res.end("Chal nikal")
})

server.listen(67)