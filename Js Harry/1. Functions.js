// function tarif(name){
//     console.log("HEy "+name + "U r bootiful");
//     console.log("HEy "+name + "U r Chora");
//     console.log("HEy "+name + "U r mankada");
//     console.log("\n")
// }

// tarif ("Kanpri");
// tarif ("PRi");



// Value ko dalne ke liye hum return keyword ka  use karenge 

function sum(a,b,c=3){
    console.log(a+b+c);
    return a+b+c;
}

sum("Kanpri ",69);
// let result = sum (9+2);
let result = sum (9,2);
console.log("The sum of those no.s is: ",result);   //undefined until return keyword is used

result2 = sum (1,2);
result3 = sum (1,2,1);
console.log("Result 2 :",result2);
console.log("Result 3 :",result3);


//  ARrrow Function

const func1 = (x)=>{        // Storing function an variable
    console.log("I m an arrow function ", x);
}

func1(36);
func1(69);