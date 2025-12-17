const {createReadStream} = require('fs')
//const {readFileSync} =require('fs')
const http=require ('http')

http.createServer((req,res)=>{
    const stream=createReadStream('./Streams/Bigfile.txt');
    stream.on('open',()=>{
        stream.pipe(res);
    })
    stream.on('error',(err)=>{
        res.end(err);
        console.log(err)
    })
}).listen(67)