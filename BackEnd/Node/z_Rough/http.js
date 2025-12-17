const http= require('http');

const server= http.createServer((request,response)=>{
    //response.write("Welcome to homepage");
    //response.end()
    if(request.url==='/'){
        response.end("Welcome to hompage")
        return
    }
    if(request.url==='/about'){
        response.end("TMKC")
        return
    }
    response.end(
        `<h1>OOPS</h1>
        <a href='/'>Go back to hompage</a>`
    )
})


server.listen(67)