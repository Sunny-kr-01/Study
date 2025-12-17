let x=document.querySelector("#picka")
let y=document.getElementById("chari")
let z=document.getElementById("grey")
x.addEventListener("click",function(){
    x.style.backgroundColor="orange"
    x.style.color="yellow"
})
// x.addEventListener("mouseleave",function(){
    
// })
y.addEventListener("mouseenter",function(){
    y.style.backgroundColor="Red"
    y.style.color="orange"
    y.innerHTML="Click me too"
})
y.addEventListener("mouseleave",function(){
    y.style.backgroundColor="white"
    y.style.color="black"
    y.innerHTML="Charizard"
    z.style.color="black"
    z.style.backgroundColor="white"
    x.style.backgroundColor="white"
    x.style.color="black"
})
y.addEventListener("click",function(){
    y.innerHTML="AHHHH !!!"
    z.style.color="blue"
    z.style.backgroundColor="darkblue"
})