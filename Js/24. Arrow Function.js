// Callback---> Function when used as an argument 


// Arrow Functiosn Are another compact way of writting functions

const sum=(a,b) =>{
    console.log(a+b);    // if u just print sum()  -->  Prints the console  , undefined
};
// const cube= n =>{      // Possible   ----> in case of single argument
const cube=(n)=>{
    console.log(n*n);   //if u print cube()  -->  Prints the console  , (no undefined)
    return n*n*n;
};
let pow=(a,b)=>{
    return a**b;    
};
// let hello= =>{    // blank space isnt allowed Not Possible
let hello=()=>{
    console.log("HELLOW KAN");
    return "HELLOW KAN";
};


// IMprlicit Return ----matlab no need to write return or any other key word (just to make it more compact)

let summ =(a,b)=>(a+b);   // {} wont be used ,,, () will be used
let cubee=(n)=> n*n*n;
let power =(a,b)=> a**b;
let mul =(a,b)=> (a*b);


// callback--> koi bhi esa function jo dusre function mein as a Argument Pass hota hai 



pow =(a,n)=>{
    return a**n ;
}