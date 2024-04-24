// getElement by id gives the object 
// console.log()  --->will then print the object 
// console.dir()  ---> acesses the properties in the  object 


// All these are METHODS   so the have to be ENDED  with (_)

document.getElementById("description");   //"___"{CORRECT}....____{Wrong ---Refers to a variable in which id is stored}
console.dir(document.getElementById("description"));   //p#description
// console.dir(document.getElementById("description")[1]);   //p#description
document.getElementById("abc");  //null



// let smallImages = document.getElementsByClassName("oldImg");    //gives collection

// for(let i =0;i<smallImages.length;i++){
//     console.dir(smallImages[i]);
//     console.dir(smallImages[i].src);   //src --- source
// }

let smallImages = document.getElementsByClassName("oldImg");    //gives collection

for(let i =0;i<smallImages.length;i++){
    smallImages[i].src="assets/creation_3.jpeg";
    console.log(`value of image ${i} is changed`)
}

// document.getElementsByTagName("p")   //shows the collection of all the parargraph tags in object 
document.getElementsByTagName("p")[1].innerText="Wrote the new para";
document.getElementsByTagName("span")   // empty collection



// selects first elemnt

console.dir(document.querySelector('p'))   // Prints complete Object's Properties
console.log(document.querySelector('p'))

document.querySelector('p')  // selects first p elemnt
document.querySelector('#myId')  // selects first elemnt with id = myId
document.querySelector('.myClass')  // selects first elemnt with class = myClass

// Selecets all the elements
 
document.querySelectorAll('p')  // selects All p elemnt

console.dir(document.querySelector('h1'))
console.dir(document.querySelector('#description'))
console.dir(document.querySelector('.oldImg'))

console.dir(document.querySelector('div a'))  //a .boxLink  // first a tag
console.dir(document.querySelectorAll('div a'))  //NodeList(4)  // All a tag




//.innerText--Shows the visible text on the node/Screen   .innerHtml---Shows the full MArkup   .textContent---Shows the Full Text(Hidden)

let headi= document.querySelector('h1');
console.log(headi.innerText);
headi.innerText= "<u>HI THere this is spiderman</u>"   // will print as a simple text/AS IT IS
headi.innerHTML= "<u>HI THere this is spiderman</u>"   // will show desired effectts



let head = document.querySelector('h1');
// console.log(head);    //<h1>Spider Man</h1>
// console.dir(head);    //h1
console.log(head.innerText);   //Spider Man
head.innerHTML= `<u>${head.innerText}</u>`;    //now no need to remember what was the text
console.dir(head);

//img ---> element ... src ---> attribute

// GETTERS & SETTERS    //MAnupulating Attributes

let img = document.querySelector('img');
console.log(img);
img.getAttribute('id');    // mainImg
img.setAttribute('id','spidemnann_IMUGE');    // changes the style

img.setAttribute('src','assets/creation_3.jpeg');   // Changes the image 

img.getAttribute('class');   //null --- nothin is there  
img.setAttribute('class', 'images');   //setting value of class

console.log(img.getAttribute('class'))   // images

// if heading already has the class "green" and you use classList.add("green"), it won't add it again (since classes are unique)
// setAttribute("class", "green") will replace any existing classes with just "green"


// Use classList.add("green") to add a class without affecting other existing classes.
// Use setAttribute("class", "green") to replace all existing classes with a new one.


// NOTE: ONLY DEMERIT EK TIME PE BAS EK HI CLASS HO SAKTI HAI BUT .classlaist mein MORE 1 Class can be attached with an element



// .style --- //MAnupulating Style

img = document.querySelector('img');
console.dir(img);   //img#mainimg
console.log(img.style);

let heading = document.querySelector('h1');
console.log(heading.style);
heading.style.color='purple';
heading.style.color="green";
heading.style.backgroundColor="yellow"   //in css -background-color="green"    in js --camelCase--->backgroundColor = "green"



// let links = document.querySelectorAll('.box a')
let links = document.querySelectorAll(".box a");

for (let i=0;i<links.length;i++){
    links[i].style.color="goldenrod";   // this isnt css style, but inline style
}
// OR
for(let linku of links){
    linku.style.color="purple"  
}



let box = document.querySelector('.box');
console.log(box.style)    // it wont show the styles done in css ---- 
//the "style" prop. only shows for inline style

img = document.querySelector("img");
console.log(img.classList())   // cecks the classes present in it

let heading =document.querySelector("h1");
console.log(heading.classList);   //empty object 
heading.classList.add("abbc");
console.log(heading.classList);   // object  [abbc] 

heading.setAttribute("class", "green");    // ONLY DEMERIT EK TIME PE BAS EK HI CLASS HO SAKTI HAI BUT .classlaist mein MORE 1 Class can be attached with an element
// OR
heading.classList.add("green");   // crete a green class in css  --- then it will show the properties 
heading.classList.add("purple");

heading.classList.remove("green");     // remove the green class from it

//setAttribute ---> only has vaccancy for a single class or attribute  

heading.classList.contains("underline")   //false  -- means it doest have any class with it 
heading.classList.contains("purple")   //true   -- means it have a class with it 

heading.classList.toggle("green");   //Agar hoga toh remove kar dega (FAlse)   &   agar nahi hoga toh insert kar dega  (true) 


// NAVIGATION


// Parent    // Every element has a single Parent only 
let h4 = document.querySelector('h4');
console.log(h4.parentElement); 
console.dir(h4.parentElement); 

// children
console.log(h4.children);   //empty collection 

box =document.querySelector('.box')

box.parentElement
box.children
box.childElementCount    //counts the no. of child elements in the child 

let ul = document.querySelector('ul');


console.log(ul.parentElement); 
console.log(ul.children); 
// console.log(ul.firstChild); 
console.log(ul.childElementCount); 


console.log(ul.children[0]); 
console.log(ul.children[1]); 
console.log(ul.children[2]); 

console.log(ul.children[1].previousElementSibling); 
console.log(ul.children[1].nextElementSibling); 


img = document.querySelector('img');

img.previousElementSibling;   //h1
// img.previousElementSibling.color="Yellow";    //wont work ---- style ke andar color hota hai  
img.previousElementSibling.style.color="Yellow";   



// document.createElement('p');

// appendChild(element)
// append(element)   //last
// prepend(element)   //first
// insertAdjacentElement(where,element);   {4 types}

let newP =document.createElement('p');   // created a new ellement 
console.dir(newP);    // shows the object p with its attributes 

newP.innerText="This is th enew P";   // wont be showed ...We HAVE TO INSERT IT
console.dir(newP)
console.log(newP)

// Now inserting new element

h1 = document.querySelector('h1');
h1.appendChild(newP);  // append---> Kisi bhi cheez ko last mein jod dena

box= document.querySelector('.box');
box.appendChild(newP);

// let btn =document.querySelector('button');  //null
let btn =document.createElement('button');    //1. First Create Element 
console.dir(btn)
console.log(btn)
btn.innerText="I am  New Button";
box.appendChild(btn);   //2.Then Apend/Inswert it using appendChild

// appendChild se hum kis parent element ke child ke andar change kar sakte hain ... ek naya child create kar sakte hain
//append se hum ussi element mein jaake changes kar sakte hain

console.dir(newP)
console.log(newP)

console.log(newP.append(" Extra Text"))

console.log(box.append(btn))   // box ke last mein will be set 
console.log(newP.append(btn))   // newP---> p--> ke last mein will be set
console.log(newP.append(btn))   // newP---> p--> ke last mein will be set
console.log(newP.append(btn,"dont click this btn"))   // newP---> p--> will be set after btn


// console.log(newP.prepend(box))   //ERROR--->> Child elemnet coatins the PArent ellemnt
console.log(box.prepend(newP))   //sets in the begining inside box  

p = document.querySelector('p');
btn = document.querySelector('button');

console.log(p,btn)   // or write it separately

p.insertAdjacentElement('beforebegin',btn)  //outside p
p.insertAdjacentElement('afterbegin',btn)   //inside
p.insertAdjacentElement('beforeend',btn)
p.insertAdjacentElement('afterend',btn)
p.insertAdjacentElement('afterend',newP)

// REMOVING 

body.removeChild(btn);  // removes the btn(child) from the body(parent)

p.insertAdjacentElement('afterend',newP)

btn.remove()   

// a.remove()  //ERROR  // wont work because u are trying trying to remove the a tag but js is treating it as a variable so to do that u have to stor it either as {let a =document.querySelectorAll('a')  OR  document.querySelector('a') }

p.remove()  // will remove the first p  {document.querySelector('p')   not document.querySelectorAll('')}
newP.remove()

body.remove()

