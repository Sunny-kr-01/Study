//two types
//Asynchronous - Non blocking
//snchronous - bLocking

//Synchronous
const {writeFileSync,readFileSync}=require('fs');
const { readFile } = require('fs/promises');
//readfilesync
//two parameters 1) path 2) what is the encoding,so the node knows how to decode the file

const first=readFileSync('./content/first.txt','utf8');
const second=readFileSync('./content/second.txt','utf8');
console.log(first,second);

//create a new file

writeFileSync(`./content/result_sync.txt`,`Here is the result : ${first}, ${second}`,{flag:'a'}) //flag:'a' is to append //ran it amny times, so it will concatinate several times




