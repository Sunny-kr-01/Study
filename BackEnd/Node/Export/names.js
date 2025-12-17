//local
const secret="SUPER SECRET"
//share
const name="Sunny"
const john="John"
//if condition for -> this will not run unless it's is thr main file we are running
// before if we were to run the exports file's info this line also ran 
if(require.main===module){
console.log(module) //exports is an object
console.log("Hello")
}


module.exports={name,john}// name and john are exported as objects.. variables as their keys