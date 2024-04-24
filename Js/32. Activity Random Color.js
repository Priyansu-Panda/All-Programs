let btn = document.querySelector("button");
btn.addEventListener("click",function(){
    let h1 = document.querySelector("h1");
    let random =randomColor();   // Calling

    // h1.innerText= random;
    //// OR
    h1.innerText= randomColor();

    let div = document.querySelector('div')
    div.style.backgroundColor= random;
    console.log("Ouuch")
    console.log("Ur color is : ", randomColor());
    // console.log("Ur color is : "+ randomColor());
    console.log("Color Updated ")
})


function randomColor(){
    let red= Math.floor(Math.random()*256);     //0-255
    let blue= Math.floor(Math.random()*256);    //0-255
    let green= Math.floor(Math.random()*256);   //0-255
    let color =`rgb(${red},${green},${blue})`;
    return color
}