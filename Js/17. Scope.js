function calSum(a,b){
    let sum= a+b; //Function Scope
    console.log(sum);
}

// console.log(sum);   // sum not accesible
calSum(1,2)


let sum = 54;  // Global Scope
function callSumm(a,b){
    // let sum= a+b;
    console.log(sum);   //prints 54
}

callSumm(1,2); // jab tak call nahi karoge till then functioon is not gonna cum
console.log(sum);   //prints 54



// BLOCK SCOPE  

// |-->   --- loops mein or (if-else) conditional statement jo variables use hot ahi useey bahar use karna possible nahi ho pata 

{
let a= 6;    // Block Scope
const b= 9;   // Block Scope
var c = 69; 
}
console.log(a);   // Error
console.log(b);  //Error
console.log(c);   //No Error


let age =25;
if(age>=18){
    let adl1 ="Adult";   // block scope
}
console.log(adl1);  // show ERROR

let age2 =25;
if(age2>=18){
    let adl2 ="Adult";
    console.log(adl2);  // No ERROR
}

function outf(){
    let x=5;
    let y=4;
    function inf(){   //function scope
        console.log(x);
        console.log(y);
        let a = 10;
    }
    // console.log(a);   // not gonna print

    inf();   // if u dojnt call it here then content iside it wont be printed 
}

outf();   
// inf();   //not gonna print anything // function scope

