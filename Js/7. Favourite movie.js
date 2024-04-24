const fav="Avatar";
let guess = prompt("Guess the movie   or  quit");

while((guess != fav ) && (guess != "quit")){
    console.log("Wrong answer");
    guess= prompt("Again Guess the movie   or  quit");
}

if(guess == fav){
console.log(`Congrats Its ${fav}`);
}else{
    console.log(`Bhakkk Its ${fav}`);

}
