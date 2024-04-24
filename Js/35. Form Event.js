let form = document.querySelector("form");

// form.addEventListener("submit",function(){
//     console.log("Form SUbmitted");
//     alert("Hogaya Form SUbmitted");
// })

// form.addEventListener("submit",function(evnt){
//     evnt.preventDefault();   //NOw the form wont be directed to the url
//     console.log("Form SUbmitted");
//     alert("Hogaya Form SUbmitted");
// })


// form.addEventListener("submit",function(evnt){
//     evnt.preventDefault();   //NOw the form wont be directed to the url

//     let inp = document.querySelector("input");
//     console.dir(inp);    //--> we will be getting the object of inp
//     console.log(inp)   // this will also not print its inner value ...rather will print the html code 
//     console.log(inp.innerText)   //will pline blank space   // this will also not print its inner value ...rather will print the html code 
//     console.log("Ur entered  value is : ", inp.value)
// })


// form.addEventListener("submit",function(event){
//     event.preventDefault();

//     let user =document.querySelector("#user");
//     let pass =document.querySelector("#pass");
    
//     console.log("User name:"+user.value);
//     console.log("Pasword is:",pass.value);
    
//     alert(`Hi ${user.value} ypur passowrd is set to ${pass.value}`)
// })

form.addEventListener("submit",function(event){
    event.preventDefault();
    
    console.dir(this)   //form
    console.dir(form)
    
    console.log(form)
    
    // let user =document.querySelector("#user");
    let user =this.elements[0];   //form.elements[0]

    // let pass =document.querySelector("#pass");
    let pass =this.elements[1];
    
    console.log("User name:"+user.value);
    console.log("Pasword is:",pass.value);
    
    alert(`Hi ${user.value} ypur passowrd is set to ${pass.value}`)
})

//Rather than setting id for each elements... we can directly acess it using form tag  


// Non character keys humare input event ko trgger nahi karti


//// CHANGE --- Final & initial value ke in-betwn change/Difference ko track karta hai  
// OR
// (Pehele jis state mein tha and baad mein jiss state mein humne usey chod diya hai uske beech mein jab difference aa jata hai at cahnge vent trigger hota hai)


