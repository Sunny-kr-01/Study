const {readFile,writeFile}=require('fs')

readFile('./content/first.txt','utf8',(err,resolve)=>{
    if(err){
        console.log("Error");
        return;
    }
    const first=resolve;
    readFile('./content/second.txt','utf8',(err,resolve)=>{
        if(err){
            console.log('Error');
            return;
        }
        const second=resolve;
        writeFile('./content/resultant',`this is resulatant ${first} , and ${second}`,(err,resolve)=>{
            if(err){
                console.log("Error")
                return;
            }
            console.log("task done")
        })
    })
})
