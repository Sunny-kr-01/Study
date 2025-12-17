const EvenetEmitter = require('events');
const { EventEmitter } = require('stream');

const customEmitter = new EventEmitter();

customEmitter.on('response',(name,section)=>{
    console.log(`Data received user : ${name} with id ${section}`)
})
customEmitter.on('response',()=>{
    console.log("Data received")
})

customEmitter.emit('response','Sunny',2405984)