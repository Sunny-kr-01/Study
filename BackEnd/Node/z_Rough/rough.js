const http= require('http');
const {createReadStream}=require('fs')

const server=http.createServer((req,res)=>{
    const stream=createReadStream('./z_Rough/rough_content.txt');
    stream.on('open',()=>{
        stream.pipe(res)
    })    
    stream.on('error',(err)=>{
        res.end(err)
    })
})

server.listen(67)