// xyz.function()
// .fuction(CALLBACK)  ---function which is being used as an argument 



//   FOR EACH

let arr1=[1,2,3,4,5];

// xxx.forEach(Function / function ki defiination);


let el= function(elem){    // function el(elem){console.log(elem);}
    console.log(elem);
};
arr1.forEach(el);   // accessing each indivisual element of array 'arr1'
// OR
arr1.forEach(function(el){
    console.log(el);
});
// OR
arr1.forEach((el)=>{
    console.log(el);
});




let arr =[{
    name:"KAn",
    age:69,
    marks:6
},{name:"pri",
age:6,
marks:9
},{
    name:"KAnpri",
    age:9,
    marks:69
}]


arr.forEach((stud)=>{
    console.log(stud);
});

arr.forEach(function(stud){
    console.log(stud.age);
});


let studen=function(st){
    console.log(st.name);
}
arr.forEach(studen);


// MAP    --similar to forEach--creates a new  array

let num =[1,2,3,4];

let double = num.map((el)=>{
    return el*2;
});
console.log(double);   // new array 


//If the function doesnt return any value
double = num.map((el)=>{     //callback didnt returned anything 
    // return el*2;
});
console.log(double);   // [undefined, undefined, undefined, undefined,];


arr =[{
    name:"KAn",
    age:69,
    marks:6
},{name:"pri",
age:6,
marks:9
},{
    name:"KAnpri",
    age:9,
    marks:69
}]

let gpa = arr.map((stu)=>{
    // return marks/10;    //marks isnt defined 
    return stu.marks/10;
})

console.log(gpa);   // new array 


// FILTER

// IF callback  ---TRUE {element added to new array}...  if callback ----FALSE {not added to the array}

num = [2,3,5,4,6,7,9,10,8];

//to filter even no.s 

// let even =num.filter((ele)=>(ele%2==0));
let even =num.filter((ele)=>{   // even is the new array
    return ele%2==0;   // gives true (0==0) or false(1!=0)
});

// let even =num.filter((ele)=>(ele%2==0));
let odd =num.filter((ele)=>{   // even is the new array
    return !(ele%2==0);   // its gonna return the true values
});

let less =num.filter((ele)=>{   // even is the new array
    return ele<5;   // its gonna return the true values
});


// EVERY    ---returns true or false--- similar to logical AND    

[2,4,6].every((el)=> el%2==0);  //true
[2,4,6,8].every((el)=> el%2==0);  //true
[2,4,6,7].every((el)=> el%2==0);  //false
[2,3,7,9].every((el)=> el%2!=0);   //false
[5,3,7,9].every((el)=> el%2!=0);   //true

//SOME     --returns true or false--- similar to logical OR

[5,3,7,9].some((el)=> el%2==0);   //false
[5,3,7,2].some((el)=> el%2==0);   //true


// REDUCE   ---REduces the array to a single value --- RETURN is necessary to use 

let nums = [1,2,3,4];
// let finalVal = nums.reduce((accumulator,element)=>{    ---jo Return hoga that will be stored in the accumulator 


    let finalVal = nums.reduce((res,ele)=>{
        console.log(res);
        return ele+res;   //(ele+res)--- gets stored in the accumulator, then gets the call for the next element
        //sum of the array
    });
    console.log(finalVal);
    
    // Getting maximym vslue uisig reduce
    
    nums = [1,2,3,4,1];
    let result= nums.reduce((max,ele)=>{    // bydefault some value of imax will  be already there 
        if (ele>max){
            return ele;
        }else{
            return max;
        }
    })
    console.log(result);   //4
    

    
num = [10,20,30];
let check = num.every((el)=>{
    // el%10==0;   // This line performs the modulo operation (el % 10) but doesn't do anything with the result. The equality check (== 0) is there, but the result of the whole expression is not used or returned. In JavaScript, if there's no explicit return statement in a function, the function returns undefined by default.
    console.log(`Yes ist ${check}`);   //will be printed 3 times   
    return el%10==0;    //To fix this, make sure to explicitly return the result of the comparison:
})
console.log(check);



// DEFAULT PARAMETERS    ---- giving default values to arguments 

function sum(a,b){
    return a+b;  //valid +undefined no.
}
sum(2);  // NAN

function sum(a,b=3){
    return a+b;
}
console.log(sum(2));  //5
sum(1,4)   //5

function sum(a=2,b){
    return a+b;
}
console.log(sum(2));  // NAN  //a=2, b = undefined
sum(1,4)   // 5


arr = [1,3,4,2,6,8,7,9,11,5]

let max= arr.reduce((acc,el)=>{
    if (el>acc){
        console.log("acc is "+acc);
        console.log("el is " +acc);
        return el;
    }else {
        console.log("acc2 is "+acc);
        console.log("el2 is " +acc);
        return acc
    }
});
console.log(max);



arr = [10,20,30,45];

arr.every((el)=>{
    return el%10 ==0;
}) ? console.log('All elements are divisible by 10') : console.log('Not all elements are divisible by 10');
//Some method returns true when at least one element satisfies the condition


let min = arr.reduce((min , el)=>{    //both min & min are different .... one is global scope one is function scope
    if (el<min){
        return el;
    }else {
        return min;
    }
});



function getMin(arr){
     min = arr.reduce((min , el)=>{    //both min & min are different .... one is global scope one is function scope
        if (el<min){
            return el;
        }else {
            return min;
        }
    });
    return min; 
}

arr = [10,20,30,45,-1];

// getMin(arr)    // will not be printing anything as it just returns valur but not prints it
console.log(getMin(arr)); // Output: -1