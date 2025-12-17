// new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//     console.log("Async task is complete")
//     resolve() //resolve passes.. -> to "then"
//     },2000)})
//     .then(()=>{
//     console.log("Promise consumed")  // will be printed after promise 
//     })

// let promise1=new Promise((resolve,reject)=>{
//     setTimeout(() => {
//         resolve({
//             "name":"PRomise",
//             "email":"qwe@sd.sd.s"
//         })
//     },2000);
// })

// promise1.then((user)=>{
//     console.log(user.name)
// })




new Promise((resolve,reject)=>{
    error = false
    if(error){
        reject();
    }
    else resolve();
}).then(()=>{
    console.log("Promise is resolved");
    return promise2;
}).then((res)=>{
    console.log(res.username);
})
.catch((err)=>{
    console.log(err)
}).finally(()=>{
    console.log("Promise is fullfilled");  
})

let promise2=new Promise((resolve,reject)=>{
    const error=true;
    if(error){
        reject("Error : 404");
    }
    else resolve(
        {
            username:"Name",
            ROll:234,
            Sec:33
        }
    )
})

async function consumePromise2(){
    try {
        response = await promise2
        console.log(response.username);
    } catch (error) {
        console.log(error);
    }
    
}
//consumePromise2() 


























