// Ps1
// let roll = prompt("Roll the Number betwn 1-6");

let num = Math.floor(Math.random()*6)+1;

let roll = prompt("Roll the Number betwn 1-6");
let count =0;

while(true){
    count++;
    if(roll==="quit"){
        console.log(`You quit in ${count} tries`);
        break;
    }
    if (roll==num){
        console.log(`Congrats its ${num}`);
        console.log(`task Completd in ${count} tries`);
        break;
    }
    else if(roll>num){
        roll=prompt(`Sorry ist not ${roll}. Hint: ur no is Larger `);
    }
    // else (){   XXX wrong syntax  XXX
    else{
        roll=prompt(`Sorry ist not ${roll}. Hint: ur no. is Smaller `);
    }
}


// OR

// let dice=Math.floor(Math.random()*6)+1;
// console.log(dice);


// Ps 2
let myCar=["Mercedes", "Maybac"];
let car={
    name: myCar,
    model: "Z class",
    color: "Red"
}
console.log(car);
console.log(car.name);
car.name="Bentley";


//Ps 3
const Kanpri={
    name:"kanpri",
    age:69,
    ageS:"969",  // Wont be considered 
    ageS:`6969`,
    city:"Honk-kong"
}
console.log(Kanpri);
console.log(Kanpri.age,Kanpri.ageS,Kanpri.ageS);
Kanpri.city="New York";
console.log(Kanpri.city);
Kanpri.country="United States";
console.log(Kanpri);