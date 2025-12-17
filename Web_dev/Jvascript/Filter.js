function odd(ele){  //in filter we return boolean...
    return ele%2==0;
}
arr=[1,2,3,4,5,6,7,8,9]
console.log(arr)
brr=arr.filter(ele=>ele%2==0)
console.log(brr)