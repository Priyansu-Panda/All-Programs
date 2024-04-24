console.log("Hello World");
let  color="blue";
if(color=="red"){
    console.log("Stop");
}
//     elseif(color ==="yellow"){
//     console.log("Wait");
// }
//     elseif(color==="green"){
//     console.log("Go Go GOOOOO");
// }
//     else {
//     console.log(`Bheek manga ${color} nahi hota`);
// }

let size =  "L";

if (size === "XL"){
    console.log("RS 250");
}
else if (size === "L"){
    console.log("RS 200");
}
else if (size === "M"){
    console.log("RS 100");
}
else{
    console.log("RS 50");
}
// if (size == "L"){
//     console.log("RS 200");
// }
// if (size == "M"){
//     console.log("RS 100");
// }
// if (size == "S"){
//     console.log("RS 50");
// }

let marks = 69;
if (marks>=60){
    console.log("Pass");
    if (marks>=80){
        console.log("Topper Chua");
    }
    else if (!(marks>=70)){
        console.log(`Chiii`)

    }
    else if (!(marks>=80)){
        console.log(`Chiii uuu`)

    }
    else {
        console.log(`Gadha Chua Jam aru ${marks} rakhichu`);
    }
}
else{
    console.log("Better Luck NextTime");
}

let naam = `Alpha`;
let naam2 =`Beta`;
if (naam[0]=='a' || naam[0]=='A' && naam.length>3){
    console.log(`${naam }Good String`);
}
else {
    console.log(`${naam }Bad string`);
}
if (naam2[0]=='a' || naam2[0]=='A' && naam2.length>3){
    console.log("${naaam2}Good String");
}
else {
    console.log(`${naam2 }Bad string`);
}

let num = 12;

if ((num%3===0) && (num+1 ===15)|| (num-1===11)){
    console.log(`safe`);
}
else{
    console.log(Unsafe)
}