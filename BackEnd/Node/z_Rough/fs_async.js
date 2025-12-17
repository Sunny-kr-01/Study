const {readFile,writeFile}=require("fs")

readFile('./z_Rough/rough_content.txt','utf8',(err,resolve)=>{
    if(err){
        console.log("Error");
        return;
    }
    const first=resolve;
    writeFile('./z_Rough/rough_content.txt',` Repeated ${first}`,{flag : 'a'},(err,resolve)=>{ // overwrites... so to append {fag : 'a'}
        if(err){
            console.log("Error")
            return;
        }
        console.log("Job Done");
    })
})