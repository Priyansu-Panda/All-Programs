h1 = document.querySelector("h1");

// h1.style.color="red";

//// 1st Method 

// setTimeout(()=>{
//     h1.style.color = "blue";
// },1000)
// setTimeout(()=>{
//     h1.style.color = "red";
// },2000);

// function change(colour){     // Kaam Nahi Karega 
//     h1.style.color=colour;
// }

// setTimeout(change("red"),1000)       // Kaam Nahi Karega 
// setTimeout(change("blue"),4000)


//// 2nd Method

function change(colour,delay,nextColor){
    setTimeout(()=>{
        h1.style.color=colour;
        console.log("Color Updated ")
        if (nextColor){   // if true then call for next 
            nextColor()
        }
        // nextColor();   // TypeError: nextColor is not a function
    },delay)
}


////3rd Method 

// change( "green" ,1000,()=>{
//     change("orange",1000,()=>{
//         change("yellow",1000,()=>{
//             change("pink",1000);
//         });
//     });
// });





// setTimeout(function(){
//     h1.style.color="red";
// },1000);
// setTimeout(()=>{
//     h1.style.color="Orange";
// },2000);
// setTimeout(()=>{
//     h1.style.color="Green";
// },3000);

// function change(color){
//     h1.style.color= color;
// }

//     // setTimeout(change("red"),1000);
//     // setTimeout(change("orange"),1000);
//     // setTimeout(change("green"),1000);

//     setTimeout(change("red"),1000);
//     setTimeout(change("orange"),2000);
//     setTimeout(change("green"),3000);


////    

// function change(color,delay){
//     setTimeout(()=>{
//     h1.style.color= color;
// },delay)}

//     // change("red",1000);   //Sab kuch ekd sath dikha dega /// will be skipped 
//     // change("orange",1000);
//     // change("green",1000);     // will be shown


//     change("red",1000);
//     change("orange",2000);
//     change("green",3000);



// function change(color,delay,nextColor){   //nextColor   ---> Callback
//     setTimeout(()=>{
//     h1.style.color= color;
//     // nextColor()
//     if(nextColor)
//         nextColor();   //after above thing isdone then call
// },delay)}

// //     // change("red",1000);
// //     // change("orange",1000);
// //     // change("green",1000);

// change("red", 1000,()=>{    //{ "()=>{...}" }callback tabhi hoga jab pehele wala kaam khatam ho jaye
//     change("orange",1000,()=>{
//         change("green",1000,()=>{
//             change("blue",1000);
//         });
//     });
// });


function changeColor(color,delay){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            h1.style.color=color;
            console.log(`Color ${color} Changed `)   /// use this while in async await 
            resolve("canged Color");
        },delay);
    });
}

// changeColor("red",2000)      // first call the function 
// .then(()=>{              //---- if executed then do the foloowing ..... else willll e doing the catch thing 
//     console.log("Red Color completed");
//     return changeColor("orange",2000);       // calls a new function 
// })
// .then(()=>{
//     console.log("Orange color updated ");
//     // changeColor("green",2000);  print whats inside it but wont show its effect
//     return changeColor("green",2000);
// })
// .then(()=>{
//     console.log("Grreen Color completed");
//     return changeColor("Yellow",2000);
// })
// .then((resul)=>{
//     console.log("Yellow color updated ");
//     console.log(resul)
//     return changeColor("Blue",1000);
// })
// .then(()=>{
//     console.log("Blue color Updated");
// })


async function Change(){        // Change is a function is ke andar we call the ChangeColr function 
    await changeColor("red",1000)
    await changeColor("blue",1000)
    await changeColor("orange",1000)
    await changeColor("green",1000)
    changeColor("brown",1000);    // this will be skipped
    changeColor("Yellow",1000);
}

Change();
