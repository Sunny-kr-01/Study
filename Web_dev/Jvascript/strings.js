let str=" Hello World ";
console.log(str,str.length);
//for each loop adoes not work for strings

//functions
console.log(str.toUpperCase());
console.log(str) // doesnt change but changes(can consider it as a new string in the form)
let s2=str.toUpperCase();
console.log(s2);
console.log(str.trim());

//indexof
console.log(s2.indexOf('W')) 
console.log(str.indexOf('o'))    //prints first occurance for multiples
console.log(str.lastIndexOf('o'))
//char at (useless)..inverse of indexof same as str[i]

//slice
console.log(str.slice(2)) //from index 2 to end
console.log(str.slice(2,7)) //from index 2 to 7
console.log(str); // doesnt change
//split
let arr=str.split(' ');  //   '' = char     ' ' = string  ',' = split on the basis of ,
console.log(arr)
let s="a,e,we,f,faw,fe";
let brr=s.split(',');
console.log(brr);