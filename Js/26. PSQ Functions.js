function square(n){
    return n**2;
}

console.log(square(5));

// ARROW FUNCTION

let sqr = (n) => {
    return n**2;
}

console.log(sqr(4));

// -------------------

// Q. Printing Heelo Kan 5 times 

// setTimeout(()=>{} , time)
let id = setInterval(()=>{
    console.log("Hello Kan");
},2000);

setTimeout(()=>{
    clearInterval(id);
    console.log ("CLear Interval Completed");
},10000);


function sqr (n){
    return n**2
}


sqr = (n)=>{
    n**2
}