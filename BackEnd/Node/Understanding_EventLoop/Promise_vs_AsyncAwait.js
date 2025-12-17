const {readFile}=require('fs')

const getText=(path)=>{
    return new Promise((resolve,reject)=>{
        readFile(path,'utf8',(err,data)=>{
            if(err){
            reject(err)
        }
            resolve(data)
        })
    })
}

const start = async()=>{
    
try {
    const result=await getText('./Understanding_EventLoop/notes.txt') 
    console.log(result)   
} catch (error) {
    console.log(error)
}
}

start()

// getText('./Understanding_EventLoop/notes.txt')
// .then((result)=> console.log(result))
// .catch((err)=>console.log(err))

