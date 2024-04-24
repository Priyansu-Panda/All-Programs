
//Strings are immutable ...i.e no self created new string 


let a = "Kanpri"
console.log(a[0])
console.log(a[1])
console.log(a[2])
console.log(a[3])
console.log(a[4])
console.log(a[5])
console.log(a[6])
console.log(a[7])

console.log(a.length);

let real_name = "Kanpraia";
let friend = "Rahul";

console.log("His name is "+ real_name+ " His friend name is "+ friend)
console.log(`His name is ${real_name} his Friend name is ${friend}`);       // Template variables

console.log(real_name.split("a"));                   // split the string into array of characters 
console.log(real_name.split("u"));                   // split the string into array of characters 
console.log(real_name.split(""));                   // split the string into array of characters 
console.log(real_name.split(''));                   // split the string into array of characters 
console.log(real_name.toUpperCase());               // convert to uppercase
console.log(real_name.toLowerCase());               // convert to uppercase
console.log(real_name.charAt(2));                    // get character at index 2
console.log(real_name.indexOf('i'));                // returns first occurrence of 'i' in string, -1 if not found   
console.log(real_name.slice(1,4));                    // 1 included ... 4 not included
console.log(real_name.replace('a',"IA"));       //at first occurence

console.log(real_name.concat(friend)); 
console.log(real_name.concat(friend," Ankuu "));     // multiple arguments can be passed in concat function

// Searching for substring in String using methods

console.log(real_name.indexOf("pria"));             // returns position where it found the value if not found then -1
console.log(real_name.indexOf("Ia"));                // returns position where it       