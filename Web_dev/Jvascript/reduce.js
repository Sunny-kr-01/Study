arr=[1,2,3,4]
console.log(arr)
arr.reduce((x,y)=>{
    console.log(`x : ${x}   y : ${y}`)
    return x+y;   //what we return goes to x.. x starts from 1st and y from second ..if we dont initialise x that is
})
//console.log(sum)
brr=arr.reduce((x,y)=>
{
    x.push(y*2)
    return x;
},[])
console.log(brr)