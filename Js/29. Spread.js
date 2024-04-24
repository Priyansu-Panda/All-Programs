Math.min(1,2,3);
Math.min(1,2,3,4,5,0);

// BUT NOW IN ARRAY --- we have to enter each value 

let arr = [1,2,1,3,4,4,5,5,8,7,5,8,9,10];
// Math.min(arr);  // NAN
// Math.min(arr[0],arr[1],arr[2],arr[3],.....{SO ONNNN});  
Math.min(...arr);  // 1


arr = [1,2,1,3,4,4,5,5,8,7,5,8,9,10];

console.log(arr);

console.log(...arr);
// OR
console.log(1,2,1,3,4,4,5,5,8,7,5,8,9,10);

arr.push(-1);
console.log(...arr);


let str = "PRIyansu Panda  Kumar"

console.log(str);
console.log("PRIyansu Panda  Kumar");
console.log(...str);


// Spread in Array Literals

arr = [1,2,3,4,5];
let narr1 = arr;        //narr1==arr    // will copy the address of arr in it   
let narr2= [...arr];    //narr2!=arr    // will craete a copy of arr in it 


narr1.push(7);      // Will change the original array 
narr2.push(8);    //wont change arr

console.log(narr1); // [1, 2, 3, 4, 5, 7]
console.log(narr2); // [1, 2, 3, 4, 5, 8]
console.log(arr);   // [1, 2, 3, 4, 5, 7]


let chars= [..."HEllU"];

let odd =[1,3,5,7,9,1,3];
let even = [2,4,2,6,8,10,2,4];
nums =[...even,...odd];   // 1D Array  //   [2, 4, 2, 6, 8, 10, 2, 4, 1, 3, 5, 7, 9, 1, 3]
nums1=[even,odd];   //2D Array      //[Array(8), Array(7)]

// Sprad in Object Literals

const data ={
    email :"iron@hotmail.com",
    password:"AbcD"
}

const dataCopy ={...data,id :123, county:"Indonesia}"};     // or long way --- wapas se sab data ka chez ismein likho

arr =[1,2,3,4,5.5];   //array ---> Value
let obj1={arr,arr,arr};   // object ---> key : value
let obj2={...arr};    // index will be key and charachter will be the value 
let obj3={..."HELLllu"};    // index will be key and charachter will be the value
let obj6={..."HELLo"};      // index will be key and charachter will be the value
let obj4={arr,arr,arr};
let obj5={...arr,arr,...arr,...obj3,obj6};  // obj6 will be nested object 