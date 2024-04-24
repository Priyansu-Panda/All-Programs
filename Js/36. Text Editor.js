let inp = document.querySelector("#text");
let p = document.querySelector("p");

inp.addEventListener("input", function(){
    console.log(inp.value);
    p.innerText=inp.value;
})



// Callbacks--->yese function hote hain jo dusre function mein as an argument jatey hain-