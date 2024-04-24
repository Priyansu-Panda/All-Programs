// Q1 NEED TO BE SOLVED 






let btn = document.createElement("button");
btn.innerText= "Click me";
document.querySelector("body").append(btn);

// btn = addEventListener("click",function(){

btn.addEventListener("click",function(eve){

    console.log(eve)   //pointer event object
    console.dir(eve)    //pointer event object

    console.dir(btn)     // Display button object in console
    console.log("Button clicked");

    btn.style.backgroundColor="red";
})


let inp = document.querySelector("input");
inp.setAttribute("placeholder", "Enter ur name ");
console.dir(inp);  //for checking the properties of an object

inp.addEventListener("input",function(eve){
    console.log(eve);
    console.dir(eve);
    console.log(inp.value);
    let h2 = document.querySelector("h2");
    h2.innerText= inp.value;

})





