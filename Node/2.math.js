    // function declaration with arrow function
const sum = (a,b)=>  a+b;
// console.log(sum(3,4)); //9
const mul = (x,y) => x*y;  
const g = 9.8 ;
const PI = 3.14;

//// Now if we want to use these funxtions in other page while performing calculations
// Accessing the functions from another file using require() method 
// const maths = require('./maths');
// console.log(maths.multiply(5,6)); //30
// console.log(maths.g);

module.exports = 123;
module.exports = "Hello Kanpri";


// agar dusre files ko iss file ki kuch value use karni hai then we require (import) that file and access its values by dot
//  require (this file path ./2. math) 

//Object hoti hai jiske andar koi prop ya methods hoti hai jsko hum kisi dusre file mein bhejna chahte hain in same directory
//this file gives information to other files via  module.export 

// Incase this file doesnt export anything then it will return an empty object  

// module.exports ---> A speacial Objection that can cointain al the resources thata file want to send it another file

// require()---> A special function that includes diff modules that exist in different/separate files 




//// Another way of doing the same thing


// let obj ={
//     sum: sum,
//     mul: mul,
//     g: g,
//     PI :PI,
// };

// module.exports= obj;


//// Another way of doing the same thing

module.exports ={
    sum: sum,
    mul: mul,
    g: g,
    PI :PI,
};


//// Another way of doing the same thing

module.exports.sum = sum; // we can add more properties here like below 
module.exports.mul = mul; // we can add more properties here like below x,y) => x*y;  
module.exports.g = g; // we can add more properties here like below 9.8 ;
module.exports.PI = PI; // we can add more properties here like below 3.14;

////    OR

// module.exports.sum = (a,b)=>  a+b;
// module.exports.mul = (x,y) => x*y;  
// module.exports.g = 9.8 ;
// module.exports.PI = 3.14;


// exports.sum = (a,b)=>  a+b;
// exports.mul = (x,y) => x*y;  
// exports.g = 9.8 ;
// exports.PI = 3.14;


//But like module.exports = 5 is true   ... but exports = 5 isnt correct becoz  js will treat exports as a variable


/*

// Incase  of multiple exports ,we can access them through an object

// module.exports = {
//     add:function(a,b){return a + b},
//     subtract : function(c,d){ return c - d}
// }

// const calculator =require("./calculator");
// console.log(calculator.add(2,3))
// console.log(calculator.sub(5,7));

// Another way of exporting multiple items

// module.exports ={
//     area(){
//         let r=document.getElementById("radius").value;
//         alert((PI * r * r)/2);
//     },
//     circumference(){
//         let r=document.getElementById("radius").value;
//         alert (r);
//       }
//  }

*/