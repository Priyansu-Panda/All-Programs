let students= ["kan" , "Pri" , "Kanpri"];
console.log(students)

let info =["Kanpri", 69, 6.9];  // mixed array

let nam ="rohit";
nam[0]='m';
console.log(nam);   // there wont  be any change, becoz strings are immutable i.e we cant change any of its elements 

let ar = ['ab','bc','cd','de'];
ar[0]= "abc";
console.log(ar);   // now there will be change becoz ---- array's are mutable

ar[2]= "abcd";
console.log(ar);   // now there will be change becoz ---- "array's are mutable"
ar[12]= "abcde";
console.log(ar);   // now there will be change becoz ---- array's are mutable
console.log(ar[10]);   // now there will be change becoz ---- array's are mutable
console.log(ar[12]);   // now there will be change becoz ---- array's are mutable




let emp = [];
console.log(emp);   //0
console.log(info.length);   //array length
console.log(emp.length);
console.log([].length);   //0
console.log([1,2,3,4,5].length);   //5
console.log(info[0]);   //1st array element
console.log(info[0][0]);    //1st array element ka first letter or 1st element
console.log(info[0][3]);
console.log(emp[0]);   //undefined  --kuch hai hi nahi wahan
console.log(info[0].length);
console.log(info[0][3].length);

let cars= ["audi","maserati","bentley","porche","RollsRoyace"];
console.log(cars);   // Adds to the front 
// console.log(cars.unshift("Tesla"));
let newFirst = cars.unshift("Tesla")
console.log(newFirst);
console.log(cars);   // Adds to the front 
// let oldFirst=cars.shift("maserati");    //nothing happens
let oldFirst=cars.shift();   // Removes from first
console.log(cars);   
console.log(oldFirst);
let newLast = cars.push("Tesla");
console.log(newLast);
console.log(cars);
let oldLast = cars.pop();
console.log(oldLast);
console.log(cars);


console.log(cars)
console.log(cars.indexOf("porche"));
console.log(cars.indexOf("Porche"));

cars.includes("audi");
cars.includes("porche");
cars.includes("Porche");
cars.includes("toyota");

cars.concat(students);    // concats ---> Merging of two arrays
console.log(cars.concat(students));

console.log(cars.reverse());


cars.slice();
console.log(cars.slice(2));
cars.slice(1,3);
cars.slice(3);
cars.slice(5);
cars.slice(cars.length-1);
cars.slice(-1);

let color= ["red", "yellow", "brown", "black", "gold"];
color.splice(2);    // splices changes the original array 
color;
color.splice(0,1);   // start from 0 and 1 delete kardo
color;  
color.splice(0,1, "black","grey" );   // start from 0 and 1 delete kardo
color;
color.splice(0,0, "black","grey" );   // start from 0 and 1 delete kardo
color.splice(1,0, "black","grey" );   // Adding from 1 start from 0 and 1 delete kardo

let char =['b','e','c','a'];
char.sort();
cars.sort();
marks=[100,99,57,48];
marks.sort();   //will not be able to sort this nummeriacally , rather willconvert this to string then sort it out

// PSQ

let lang =[`c`, `c++`,`html`,`javascript`,`python`, `java`, `c#`];
console.log(lang);
lang.push("sql");
console.log(lang);
console.log(lang.reverse().indexOf("javascript"));

// -----

console.log("name"==`name`);
console.log("name"===`name`);
//console.log([1]===[1]);  //This condition will always return 'false' since JavaScript compares objects by reference, not value.
console.log([1]==[1]);  //This condition will always return 'false' since JavaScript compares objects by reference, not value.


let arr= ['a','b','c','d'];
console.log(arr);

let arrCopy = arr;    // address of arr is give to address of arrCopy
console.log(arrCopy);

arr == arrCopy;  //true
arr === arrCopy;  //true

arr.push('e');
console.log(arr);
console.log(arrCopy);   //yes will be changed

arrCopy.reverse().pop();
console.log(arrCopy);
console.log(arr);    //yes will be changed

let arr1= ['a','b','c','d'];
let arrCopy1= ['a','b','c','d'];

arr1 == arrCopy1;   // it will be false ad in arrey it checks the address not the value
arr1 === arrCopy1;   //false

arr.push('e');
console.log(arrCopy);
console.log(arr);    //no change


let a = 5;
a=10;
console.log(a);

// const b = 15;
// b =18;   // not possible
// console.log(b);   //15

const arr2 =[1,2,3,4];
arr2.push('5');   // will work
arr2.push(5);   // will work
console.log(arr2);

// arr2 = arr;   // not possible
// arr = arrCopy;   // its possible

let nums= [[1,2], [2,6,,5], [3,4]];
console.log(nums);
nums.length;
console.log(nums.length);   //3
console.log(nums[1]);   //[2,6,empty,5]
console.log(nums[1].length);  //4
console.log(nums[1][1]);  //2
console.log(nums[1][4]);   //undefined
console.log(nums[1][2]);  //prinitig empty -----> Undefined 

let tic =[['X',,'O'],['','X','O'],['O',null,'X']];   // 3 rows ----inside that has 3 columns
console.log(tic);
console.log(tic.length);   //3
tic[0][1]='O';
console.log(tic);
// tic[0][1][0][1]='a';   // has no meaning
// console.log(tic);
console.log(tic[0]);
console.log(tic[0][1]);