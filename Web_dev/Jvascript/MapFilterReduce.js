function twice(x){
    return 2*x
}
arr=[1,2,-3,4,-5]
console.log(arr)
brr=arr.map(twice)
console.log(brr)
crr=arr.map(
    function(ele){
        return Math.abs(ele);
    }
)
console.log(crr)
drr=arr.map(ele=>{
    return ele*ele
})
console.log(drr)
err=arr.map(ele=>ele)
console.log(err)