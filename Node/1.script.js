// let n =5 ;

// for (let i = 0; i <n;i ++){
//     console.log("Hello, "+i);
// }
// console.log("Bye")



////TAking Arguments 

// console.log(process);
// console.log(process.argv);

// let args = process.argv;

// for (let i = 2 ; i<args.length;i++){
//     console.log("Hello , ", args[i]);
// }




// const someValue = require("./2. math");
// console.log(someValue);

const mathu = require("./2.math");
console.log(mathu);
console.log(mathu.sum);
// console.log(mathu.sum());    //NaN
console.log(mathu.sum(4,6));
console.log(mathu.g);



//// JAb bhi hum kisi directory ko require karne ko try karte hain then ....

//// it first tries to find out a file name "index.js" in that directory 
////i.e  it will search for the js file  named as index.js 
//// index.js is the entry point 



// Agar fruits folder/ directory ki complete information Yeh File use karna chahe toh  
// toh ussi fruits wali directory ke andar ek "index.js " wali file creat karoa nd collect/require all the file content over there 

const info = require ("./Fruits");      // it is requiring the complete directory 
console.log(info);
console.log(info[0].name);
