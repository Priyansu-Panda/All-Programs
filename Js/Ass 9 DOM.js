// let input= document.querySelector("button")
let button= document.createElement("button");
button.innerText= "Click me";
let input = document.createElement("input");
// body.append("button");
document.querySelector("body").append(input);
document.querySelector("body").append(button);

// input= document.querySelector("input");
button.getAttribute("id");   //null
button.setAttribute("id","btn");

// input= document.querySelector("input");
input.setAttribute("placeholder","username")

let btn = document.querySelector("#btn");
btn.classList.add("btnStyle");

// const btn = document.querySelector("#btn");
// btn.style.backgroundColor = "blue";
// btn.style.color = "white";

let h1 = document.createElement("h1");
h1.innerText="DOM Practice";
h1.innerHTML="<u>DOM Prractice</u>";
document.querySelector("body").prepend(h1);
h1.style.color="purple";
// document.querySelector("body").append(h1)

let p = document.createElement("p");
p.innerHTML= "Apna College <U><b> Delta </b></u> Practice ";

document.querySelector( "h1" ).after(p); 
// document.querySelector( "button" ).after(p); 
// document.querySelector( "button" ).before(p); 
// document.querySelector( "input" ).after(p); 
// document.querySelector( "h1" ).before(p); 

// document.querySelector("body").appendChild(p)



