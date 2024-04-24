let greet ="Hello";

function chGreet(){
    let greet="Namaste";
    console.log(greet);
    function inGreet(){
        console.log(greet);
    }
    // inGreet();
}

console.log(greet); //Hello
chGreet();  // Namaste(1x)  ______ twice wont be printed as inGreet is not called 
// inGreet();