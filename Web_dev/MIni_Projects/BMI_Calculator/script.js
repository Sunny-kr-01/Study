const form=document.querySelector("form")
form.addEventListener("submit",function(e){
    e.preventDefault();
    const cm=document.querySelector("#height").value
    const kg=document.querySelector("#weight").value
    const result=document.querySelector("#result")
    result.innerHTML=`G Marao formula batao pehle <br>waise multiply karke ye aarah : ${cm*kg}`
    
})

