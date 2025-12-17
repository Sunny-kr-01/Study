const http=require('http');

const server=http.createServer((req,res)=>{
    if(req.url==='/'){
        res.end('Welcome to our Homepage')
        return
    }
    if(req.url==='/about'){
        res.end('This is about Section')
        return 
    }
    res.end(
        `<h1>Oops!</h1>
        <a href='/'>Go back home</a>`
        
    )
})


server.listen(5000)
