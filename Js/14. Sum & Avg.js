function avg(a,b,c){
    let avg =(a+b+c)/3;
    console.log(`So the avg is ${avg}`);
}

avg(1,2,3);

// Sum upto n

function sum(num){
    let sum=0
    for(let i =1;i<=num;i++){
        sum+=i;
    }
    return sum;
}
function sum(num){
    let sum=0
    for(let i =1;i<=num;i++){
        sum+=i;
    }
    console.log(`The sum is ${sum}`);
}
console.log(sum(10));   // The sum is 55 , undefined

sum(10);  //The sum is 55 


// ACtually Coorected version
function sum(num) {
    let sum = 0;
    for (let i = 1; i <= num; i++) {
        sum += i;
    }
    console.log(`The sum is ${sum}`);
    return sum;
}
console.log(sum(10));   //The sum is 55 , 55