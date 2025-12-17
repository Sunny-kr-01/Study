const {readFile} = require('fs')

console.log("Starting First Task")
readFile('./Understanding_EventLoop/notes.txt','utf8',(err,res)=>{
    if(err){
        console.log("Error")
        return
    }
    console.log(res)
    console.log('Task Comleted');
})
console.log("Starting with next task")




