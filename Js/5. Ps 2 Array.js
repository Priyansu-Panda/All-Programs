// let year =[`jan`, `july`, `march`,`aug`];
// let newYear = year.shift().year.shift();
// newYear= newYear.unshift(`june`).newYear.unshift(`july`);

let year = [`jan`, `july`, `march`, `aug`];

// Using shift() removes the first element from the array and returns it
let firstMonth = year.shift();

// Accessing the 'year' property of the string returned by shift() will result in an error
// NOTE :-  Also, shift() is a method for arrays, not for strings
// Instead, we should use the 'unshift' method to add elements to the beginning of the array
let newYear = firstMonth;

newYear.unshift(`june`);
newYear.unshift(`july`);



// Display the updated array
console.log(newYear);

console.log(year.splice(0,2,"july","june"))

// ------------------------

let lang =[`c`, `c++`,`html`,`javascript`,`python`, `java`, `c#`];
console.log(lang);
lang.push("sql");

console.log(lang);
console.log(lang.reverse().indexOf(`javascript`));

