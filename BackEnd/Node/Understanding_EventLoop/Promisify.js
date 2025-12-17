const {readFile,writeFile} =require('fs').promises
// const util=require('util')
// const readFilePromise=util.promisify(readFile)
// const writeFilePromise=util.promisify(writeFile)

const start =async()=>{
    try {
        const first=await readFile('./Understanding_EventLoop/notes.txt','utf8')
        console.log(first)
    } catch (error) {
        console.log(error)
    }
}

start()
