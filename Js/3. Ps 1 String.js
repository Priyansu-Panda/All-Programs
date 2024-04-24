let msg ="help!"
console.log(msg.trim().toUpperCase());

let str ="ApnaCollege";
console.log(str.slice(4,9));  //  strats from 0,  4---included 9--- not included
console.log(str.indexOf("na")); 
console.log(str.replace("Apna", "Our")); 


console.log(str.slice(4).replace("l", "t")); 
let newStr=str.slice(4).replace("l", "t");
console.log(newStr);
newStr= newStr.replace("l", "t");
console.log(newStr);
// OR
console.log(str.slice(4).replace("l", "t").replace("l","t"))