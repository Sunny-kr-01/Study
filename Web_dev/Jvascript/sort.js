arr=[2,6,4,7]
console.log(arr)
arr.sort()
console.log(arr)
//sorting in decreasing order
arr.sort(function(a,b){
    return b-a;
})
console.log(arr)
arr.sort((a,b)=>
{                   //(a,b)=>b-a
    return a-b
})
console.log(arr)
brr=[1,-3,5,-2]
console.log(brr)
brr.sort()
console.log(brr)
brr.sort((a,b)=>a-b)
console.log(brr)