//// EVENTS are signals tha something has happened/occured --- User input or actions
// ----Kuch Ghatna ghatni hai uske basis pe kuch kaam karwana chahhate hain 

let btn =document.querySelector("button");

console.dir(btn);
console.log(btn);

//// Event Listener is a function that gets called whenever an event occurs on the element to which it is attached

// {Onclick is a property}

btn.onclick = function(){    //Setting a function to a button
    console.log(" U clicked me ! ! ");
    // alert("Hello");
}


function sayHello(){   // () has to be present
    alert("Hello");
    console.log("Uff ho");
}

function sayHi(){
    alert("Hii Meri Jaan...");
    console.log("Hii Meri Jaan...");
}

btn.onclick = sayHello;   // while calling do not write ()  --- it would mean that u are directly calling th efunction over there 
btn.onclick = sayHi;   // while calling do not write ()  --- it would mean that u are directly calling th efunction over there 

////By omitting the parentheses, you pass the function itself, and it will be executed later, in response to the click event. If you use parentheses, the function will be executed immediately, not when the event occurs. This is generally not what you want when setting up event listeners. You want the function to be called when the event happens, not when you are setting up the listener


// let  btns  = document.querySelectorAll("button");
// for (btn2 of btns ){
//     btn2.onclick= sayHello;      //This wont get executed 
//     btn2.onclick= sayHi;      //THis is gonna get executed 

//     console.dir(btn2);   //Button object  (Each Button)
//     // console.log(btns);   // NodeList  ---collection of All button object

// //EXPLORING ON MOUSE ENTER property

//     btn2.onmouseenter=function(){
//         console.log("U hovered and entered the button")
//     }

//     // btn2.onclick= "Uff ho";
//     // console.log(btns);
// }

// for (let i=0;i<btns.length;i++){
//     btns[i].onclick =sayHello;   // this isnt css style, but inline style
// }


btns  = document.querySelectorAll("button");

// for (btn2 of btns ){
//     btn2.onclick= sayHello;
//     btn2.onclick=sayHi;   // out of two ... only thiss will be executed ...    So now we will be using eventlistener
// }



////Onclic prop ki hum multiple value set nahi kar sakte ----- normal OnCLICK se we can use one Fuction at a time but to use more than one function we use addEventListener
////par ek single object ke liye we can set multiple event listeners

////KAb mere page pe woh kam likha hoga aur kab mein woh kaam karunga 

//// Button ke click hone pe multiple functions execute ho

// element.addEventListener("event",callback);   //callback-->Function being used as an argument ---- Ek function jismein we will write uss cheez ko kya ka kaam karna hai 

for (btn2 of btns ){
    // btn2.addEventListener("click",sayHello);    //instead of using onclick we used "click"
    // btn2.addEventListener("click",sayHi);

    //// Now both will be executed 
    
    // btn2.addEventListener("dblclick",sayHello(){   //Error  ---By omitting the parentheses, you pass the function itself, and it will be executed later, in response to the click event. If you use parentheses, the function will be executed immediately, not when the event occurs. This is generally not what you want when setting up event listeners. You want the function to be called when the event happens, not when you are setting up the listener
    // btn2.addEventListener("dblclick",sayHello{   
    //     console.log("U Doublled clicekd me")
    // });


// Ek butn(onclick prop) ke liye ek hi function hi set karsakte hain but not multiple , but can can do that for in case of add event listener 
    //// Button ke click hone pe MULTIPLE function Execute ho ...thts not possible ...so we use addEventListener

    btn2.addEventListener("dblclick",function(){   //callback---> Arguments gone into a function
        console.log("U Doublled clicekd me")
    });


    // btn2.addEventListener("dblclick", function() {
    //     sayHello();   
    //     console.log("You Double-clicked me");
    // });
    // //      OR 
    // btn2.addEventListener("dblclick", () => {
    //     sayHello();   
    //     console.log("You Double-clicked me");
    // });


    let p =document.querySelector("p");
    p.addEventListener("click",function(){
        console.log("P is being Clicked")
    })
    
    let boxer = document.querySelector(".box");
    boxer.addEventListener("mouseenter",function(){
        console.log("U enter the box")
    }) 
}
