


let para1 =document.createElement('p');
para1.innerText= "Its para1";

// IN CSS
// .red{
//     color:red;
// }
para1.classList.add("red")

document.querySelector("body").append(para1)

// -------------------

let nh3 = document.createElement("h3");
nh3.innerText="I am blue h3";

// .blue{
//     color:blue ;

nh3.classList.add("blue");

document.querySelector("body").append(nh3);

let ndiv = document.createElement("div");
// .back{
//     border: 1px solid black;
//     background-color: "pink"
// }


let dh1 = document.createElement("h1");
dh1.innerText="I \am in  a div ";


let dp2= document.createElement("p")
dp2.innerText="Mee too also"
ndiv.append(dh1);
ndiv.append(dp2);
ndiv.classList.add("back")

// document.querySelector("body").append(ndiv)
document.querySelector("body").prepend(ndiv)