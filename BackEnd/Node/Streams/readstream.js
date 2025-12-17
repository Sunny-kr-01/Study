const {createReadStream} = require('fs')

const stream  =createReadStream('./Streams/Bigfile.txt',{highWaterMark : 9000, encoding : 'utf8'});

// reading data in chunks  by default this chunk is 64 kb
stream.on('data',(result)=>{
    console.log(result)  
})

// default size of buffer can be controlled..
// {highWaterMark : 9000}
// {highWaterMark : req_number , encoding : 'utf8'} --> content
stream.on('error',(error)=>{
    console.log(error)
})
