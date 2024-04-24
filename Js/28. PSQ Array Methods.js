
num = [10,20,30];
let check = num.every((el)=>{
    // el%10==0;   // This line performs the modulo operation (el % 10) but doesn't do anything with the result. The equality check (== 0) is there, but the result of the whole expression is not used or returned. In JavaScript, if there's no explicit return statement in a function, the function returns undefined by default.
    console.log(`Yes ist ${check}`);   //will be printed 3 times   
    return el%10==0;    //To fix this, make sure to explicitly return the result of the comparison:
})
console.log(check);


nums = [1,2,3,4,1];
res = nums.reduce((min,ele)=>{
    if(min<ele){
        console.log(min);
        return min;
    }else{
        console.log(min);
        return ele;
    }
})
console.log(res);


function getMin(nums){   //nums will be different 
    let res = num.reduce((min,ele)=>{
        if (min<ele){
            return min;
        }else{
            return ele;
        }
    })
    return res;
}
getMin(nums);