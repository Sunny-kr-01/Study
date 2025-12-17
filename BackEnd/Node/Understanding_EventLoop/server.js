const http=require('http');

const server=http.createServer((req,res)=>{
    if(req.url=='/'){
        console.log("Request came in") // after every refresh
        res.end("Welcome to HomePage") 
        return;
    }
    res.end(`<a href='/'>Click here to resolve your doubt</a>`)
})

server.listen(500,()=>{
    console.log("Server is listening to port 500") // this consol.log run only when server called in the start.. not again even if any intereption happens
})
