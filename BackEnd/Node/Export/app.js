//Modules
//Every file in node is a module

const names= require('./names')
console.log(names)
console.log(Object.values(names));
const sayHi=require('./utils')
const sayHola=require('./utils')// multiple variable names for same functions while exporting
//satHi was exported as object .. that's why...
// we are using same variable name.. still working
sayHi.sayHi("Susan")
sayHi.sayHi(names.john)
sayHi.sayHi(names.name)
sayHola.sayHi(names.name)

const data=require('./Alternative_flavour')
console.log(data)
console.log(data.items);
sayHola.sayHi(data.singlePerson.name);