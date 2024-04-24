let naame ="Kanpri";
naame="Sharma";

let sum = function(a,b){    // called ----> sum(1,2)--> 3   
    return a+b;
}

let hello= function(){   // called ----> hello()---> "HEllo"\n 'HELLU'-----hello is a function 
    console.log("Hello");
    return "HELLU";
}

hello= function(){
    console.log("namaskar");  // updated value
}




// HIGHER ORDER Functions

// function mulGreet(fun(),county){   //fun() ---> THROWS ERROR

function mulGreet(fun,county){      //(function , count)    //// HIGHER ORDER Functions
    for (let i =1;i<=county;i++){
        fun();
    }
}

let greet = function(){
    console.log("helo");
}

mulGreet(greet, 6);
mulGreet(function(){console.log("Namaskar")}, 16);

// mulGreet(greet(), 6);   // "()"--->we didnt used greet rather, we executed greet--- 
// Function ki defination ko bghejna hai uski calling statement ko nahi bhejna as an argument


// Higher oder Functions (Returns)

let odd = function(n){
    // console.log(!(n%2==0));
    console.log((n%2!=0));
}

let even = function(n){
    console.log(n%2==0);
}

function oddEvenFactory(request){
    if(request=="odd"){
        let od=function(n){
            console.log(!(n%2==0));
        }
        return od;
    }
    else if (request=="even"){
        let ev= function(n){
            console.log(n%2==0);
        }
        return ev;
    }
    // else(){    //wrong
    else{
        console.log("Wrong rquest");
    }
}
let request= "odd";
let fun = oddEvenFactory(request);