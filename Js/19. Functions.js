
function naam(name){
    console.log(name);
}
naam(prompt(" naam is: "));

function sum (a,b){
    console.log(a+b);
    return a+b;
}

sum(5,5);   // here it will print due to the console



function sum (a,b){
    return a+b;
}

sum(5,5);   // nothing gonna happen  until u print it

console.log(sum(5,6));   // now gonna execute 
//      OR
let s = sum(6,6);    // called & stored in a variable
console.log(s);

console.log(sum(sum(1,2),3));
console.log(sum(1,2));
console.log(sum(sum(1,2),sum(2,3)));


function isAdult(age){
    if(age>=18){
        return age+ "Adult";
    }
    else{
        return age + "Chota chua";
    }
    console.log("BUbye")  // wont print anthing {AFTER RETURN}
}
isAdult(19);   //wont be priinting athough it has the returned value but now has to use console used
console.log(21);   // will print this
