const answer=Math.ceil(Math.random()*100);
const form=document.querySelector("form")
count=10;
guess=document.querySelector("#guessfeild")
submit=document.querySelector(".submitguess")
display=document.querySelector("#HighLow")
remaining=document.querySelector(".remaining")

submit.addEventListener("click",function(e){
    e.preventDefault();
    if(count){
    if(guess.value==answer){
        display.innerHTML="Right"
    }
    else if(guess.value>answer){
        display.innerHTML="high"
        count--;
    }
    else if(guess.value<answer){
        display.innerHTML="low"
        count--;
    }
    remaining.innerHTML=`${count}`
}
else display.innerHTML="NO more attempts remaing"
})
