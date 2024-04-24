let inp = document.querySelector("input");

// inp.addEventListener("keydown",function(event){   // ByDefault function has certain "Event" Embedded in it 


// inp.addEventListener("keydown",function(event){
    // console.log(event);   //prints event object 
    // console.dir(event);

//     console.log("key = "+ event.key);
//     console.log("key = ", event.key);   //","---Just adds more space inbetwn

//     console.log("code = ",event.code);

//     console.log("Key was Pressed")
// });


inp = document.querySelector("input");

inp.addEventListener("keydown",function(eve){
    console.log("code = ",eve.code);
    if(eve.code== "KeyU" || eve.code=="ArrowUp"){
        console.log("Character Moves Forward")
    }
    else if(eve.code== "KeyD" || eve.code=="ArrowDown"){
        console.log("Character Moves Backward")
    }
    else if(eve.code== "KeyL" || eve.code=="ArrowLeft"){
        console.log("Character Moves Left")
    }
    else if(eve.code== "KeyR" || eve.code=="ArrowRight"){
        console.log("Character Moves Right");
    }
})


//writing "this" in callback ---> jiske wajah se event listener create hua hai ..wahi this hai/ jiske wajah se callback execute hua hai..wahi this hai