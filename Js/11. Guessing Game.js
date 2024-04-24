// let max = prompt("Enter The max Number");
let num = Math.random();   // any random no. betwn 0-1

// num= num*max;    // max limit ----  0-max
num= num*100;    // max limit ----  0-99

num=Math.floor(num)+1;   // remove decimal and max limit-- 1-100

let count = 0;

// let guess =prompt(`Gusess the Number Betwn 1- ${max}`);
let guess =prompt(`Gusess the Number Betwn 1- 100`);

// while (guess != num){
while (true){
    count++;
    if ( guess== "quit"){
        console.log("YOU QUIT");
        break;
    }
    if (guess == num){
        console.log(`U are Correct its ${num}, inn ${count} tries`);
        break;
    }
    else if (guess>num){
        //console.log(`Sorry its not ${guess}, HINT: Ur no. is too large`);
        guess = prompt(`Sorry its not ${guess}, HINT: Ur no. is too large`);
    }
    else{
        //console.log(`Sorry its not ${guess}, HINT: Ur no. is too large`);
        guess = prompt(`Sorry its not ${guess}, HINT: Ur no. is too less`);
    }
}
