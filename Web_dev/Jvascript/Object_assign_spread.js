let student1={
    "name1":"Sunny Kumar",
    section1: 33,
    "Roll no1.": 984
}
let student2={
    "name2":"xyz",
    section2: 33,
    "Roll no2.": 65
}
//object of object using assign
//const students=Object.assign(student1,student2); //adds contents of std2 to st1 so its good to use empty object
const students=Object.assign({},student1,student2); //first one is target and rest are sources
console.log(students);
console.log(student1);
//using spread
const stds={...student1,...student2} //mostly used
console.log(stds)

//printing keys values and their pairs
console.log(Object.keys(student1)) // returns in form of array i.e very important
console.log(Object.values(student1))
console.log(Object.entries(student1))
console.log(student1.hasOwnProperty("section1"))//