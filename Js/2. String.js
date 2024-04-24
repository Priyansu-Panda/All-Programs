// let msg ="    Hello   "
// let msg ="    Hel  lo   "

// let password = prompt("set your password");
// let newpass = password.trim();

// console.log(password);   // password remains same as it is...as strings are immutable
// console.log(newpass);    // ek new string create hoti hai 

// console.log(password.toLowerCase());   
// console.log(password.toUpperCase());



// METHODS WITH ARGGUMENTTS -inDexof    
let str= "ILoveCoding  Code";
str.indexOf("Code");  // nothing will be printed ---- absence of console.log

let str2 =str.indexOf("Code");
console.log(str2);   // now it will be printed 

let str3 =str.indexOf("code");
console.log(str3);   // -1      


// METHOD CHAINING 

let msg1 ="    hello    ";
let newMsg1= msg1.trim();
console.log(newMsg1);
newMsg1= msg1.toUpperCase();
console.log(newMsg1);

let msg2 ="    HELLuu    ";
// newMsg2=msg2.trim().toLowerCase();   you have to declare it first using LET
let newMsg2=msg2.trim().toLowerCase();
console.log(newMsg2);



let msg3 = "ILoveCoding  Code";
console.log(msg3.slice(0,4));
console.log(msg3.slice(0));
console.log(msg3.slice(4,msg3.length));
// OR
console.log(msg3.slice(4));
console.log(msg3.slice(-2));   // length - num

console.log(msg3.replace ("love" , "do"));
console.log(msg3);  // VAluue remains same 
console.log(msg3.replace ("o" , "x"));   // jo pehele dikhega usey replace karenge saahab
msg4 = "letletlet";
console.log(msg4.replace ("let" , " lattu   "));   // jo pehele dikhega usey replace karenge saahab

console.log(msg3.repeat (3));   





