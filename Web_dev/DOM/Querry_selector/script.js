let x=document.querySelector("h1")
x.style.color="blue"
x.style.backgroundColor="red"
x.style.fontFamily="Calibri"
let y=document.querySelector("h3")
setTimeout(function(){
    y.innerHTML="Changed";
},2*1000
)