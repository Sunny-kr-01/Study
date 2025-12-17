const path=require('path')

console.log('..',path.sep) // prints currnent path '\'

const filePath=path.join('/content','subfolder','test.txt')
const filepath=path.join('/content/','subfolder','test.txt') //same
console.log(filePath)
console.log(filepath)

const base=path.basename(filePath)
console.log(base); // last (basic) location in path..

const absolute=path.resolve(__dirname,'content','subfolder','text.txt')
const absolut=path.resolve(filePath)
const absolue=path.resolve(base)
console.log(absolute)
console.log(absolut)
console.log(absolue)