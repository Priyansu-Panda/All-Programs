// MUltiple Type of objects{h1,p, div,h3,,,etc} ke upar Ek Single Event Listener use karna chahate hain

//this ka matlab callback mein wahi object hota hai jisne ussey event listener ke andar Call/Execute karwaya hai

let btn= document.querySelector("button");
let p = document.querySelector("p");
let h1 = document.querySelector("h1");
let h3 = document.querySelector("h3");

btn.addEventListener("click", function(){
    console.log(this)     // this ---> Wahi object hota hai jisnne evnet listener pe ussey call kiya hai .....SPecific object for whom the event handler has been created 
    console.log(this.innerText)
    console.dir(this)
    console.dir(this.innerText)
    this.style.backgroundColor="yellow"   // will create in the button ---> <button style="background-color: yellow;">click me !!</button>
})

function bgColor(){
    console.log(this.innerText);
    this.style.backgroundColor="blue"
}

// btn.addEventListener("click", bgColor())  //---Incorrect     ---> you are invoking bgColor immediately, and when the click event occurs, it's not triggered by the button, and this inside bgColor becomes undefined. As a result, you get an error when trying to set the backgroundColor

btn.addEventListener("click", bgColor);  //---Correct


p.addEventListener("click", bgColor)

h1.addEventListener("click",bgColor)

h3.addEventListener("click",bgColor)

////   OR

// btn.addEventListener("click", function(){
//     console.log(this.innerText);
//     this.style.backgroundColor="blue"
// })

// p.addEventListener("click", function(){
//     console.log(this.innerText);
//     this.style.backgroundColor="blue"
// })

// h1.addEventListener("click", function(){
//     console.log(this.innerText);
//     this.style.backgroundColor="blue"
// })

// h3.addEventListener("click", function(){
//     console.log(this.innerText);
//     this.style.backgroundColor="blue"
// })
