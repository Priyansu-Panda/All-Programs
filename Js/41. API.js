// // api ---> URL/valid links hote hain jinpe hum kuch request bhejte hain and ussi hisab se woh hume kuch response/valid data dete hain 
// //API returns data when requested in form of  JSON...not in js or html format 
// //This function is used to parse the returned JSON data.

// //when the user[client] sends a requests to api[url]or[link]or[endpoint] then it sends back data in form of JSON format

// //www.json.org

// //JSON.parse(data) ---> To parse a 'string'/json data into a 'Js Object'.

// //JSON.stringify(json) ---> To parse a 'Js Object' into a json/'string' data.

// let jsonRes = '{"fact":Aprcbbzu","length":69}';

// let validRes = JSON.parse(jsonRes);
// console.log("Valid Response: ",validRes.fact);

// let student = {
//     name: "Kanpri",
//     roll: 69,
// };
 
// console.log(JSON.stringify(student));



// // AJAX --->api ko call kar rahe hain yeh calls asynchronously work kar rahe hain and humare pass kuch response aa rahe hain jinpe hum work kar rah ehain


// // fetch(url) ---> url ko ek request bhej deti hai  --> in inspect network could be seen list of requests 
// // it returns a promise  ... so methods (Then,catch) of promises can be applied on it 

// let url;
// fetch (url)
//     .then((res)=>{      //Promise agar sucessfully resolve ho jata hai then jo bhi response ata hai
//         console.log(res);  // -- > this will give response object

//         ////Now we have the reqd data bt we cant read it... to read it we need to parse it 
//         // console.log(res.json());   // This also return a Promise.. So we can apply its methods and show the reqd data

//         // res.json()
//         // .then((dataa)=>{
//         //     console.log(dataa);   ///--> This will give actual json data / object in the promise 
//         // })
//     return res.json();      //convert response into json format
//     })
//     .then((dataa)=>{
//         console.log(dataa);   ///--> This will give actual json data / object in the promise 
//         console.log(dataa.fact);
//         return fetch(url);      //THis will also return a promise //we want another data  from same URL.. 
//         })
//         .then ((res)=>{     // promise mein jo response milega ...now we have to make it readable 
//             return res.json();     //convert response into json format //THis will also return a promise 
//         })
//         .then((data2)=>{
//             console.log(data2);
//             console.log(data2.fact);
//         })
//     .catch((err)=>{
//         console.log("error:  "+ err);   //---> if any error occurs then this block will execute
//     })

//     console.log("I am Veyr HAppy");      // sabse pehele yeh print hoga becoz api calls asynchronously chalega backend mein---i.e js unka resolve hone ka wait naho karega

// ////using Async and await with fetch 

// ////Async is used to define an async function ..and Await is used inside that function to wait for something to happen 




// // async function getFacts(){
// //     // let res = fetch(url);
// //     // console.log(res);   // may show undefined becoz js is synchronous and fetch is asynchronous which mean api call may not be complete so it wont show any result                                                                       
// //     let res = await fetch(url);
// //     console.log(res);   //will return promise obj
// //     let data1 = await res.json();   //consverting response into readable json format
// //     console.log(data1);   //will return promise obj
// //     console.log(data1.fact);

// // }


// ////    BETTER  WAY TO USE ASYNC using try and catch ....to avoid any error

// async function getFacts(){
//     try{
//         let res = await fetch(url);
//         console.log(res);   //will return promise obj
        
//         // let data1 = res.json();   // may show undefined becoz js is synchronous and fetch is asynchronous which mean api call may not be complete so it wont show any result                                                                       

//         let data1 = await res.json();   //consverting response into readable json format
//         console.log(data1);   //will return promise obj
//         console.log(data1.fact);

//         let res2 = await fetch(url);
//         console.log(res2);      //will retrun a promise object
//         let data2= res2.json();     // to make it readable in json format
//         console.log(data2);     //will retruna promise obj
//         console.log(data2.fact);    //will return the fact
//         // throw "This is an Error";  //If you want to Throw some error
//     }
//     catch(e){
//         console.log("error:",e);   //---> if any error occurs in async
//    }

//    console.log("BYE");      //Wont be affected even after any error
// }

//// AXIOS

//instead of fetch () we use axios.get/put/...--> which is more powerful  ... although it has the same function but in fetch it doesnt gives the desired data but we have to parse it 


let btn = document.querySelector("#btn1");

btn.addEventListener("click", async ()=> {
    console.log("button is clicked")
    // let fact =  getFacts();    // will be returning a promise ...since getFacts() is a async function ...so convert the callback to async                                                      
    let fact = await getFacts();    //getFacts jab tak valid data return nahi kareg tab tak hum wait karenge 
    console.log("Facts is: ",fact)

    let p = document.querySelector("#result")
    p.innerText= fact;
})

// url= "https://world.openfoodfacts.org/api/v0/product/737628064502.json";
let url4= "https://catfact.ninja/fact";

async function getFacts(){
    try{
    let res = await axios.get(url4);
    // console.log(res);
    // console.log(res.data)
    // console.log(res.data.fact);     //"data" is an object
    return res.data.fact;  
    }catch(e){
        console.log("Error- "+e);
        return "no error Found"
    }
}

let url2= "https://dog.ceo/api/breeds/image/random";

let btn2 = document.querySelector("#btn2");

// btn2.addEventListener("click", ()=>{     //The error in your code lies in the event listener function attached to btn2. When you call getDog() to retrieve the image link, you are expecting it to return a value immediately. However, since getDog() is an asynchronous function that returns a promise, it doesn't return the value directly. Instead, it returns a promise that resolves with the value once the asynchronous operation is completed. To handle this correctly, you should await the result of the getDog() function call inside an async function

btn2.addEventListener("click",async ()=>{
    console.log("Button2 is CLicked ");
    // let link =  getDog();  // will show error
    let link = await getDog();
    let img = document.querySelector("#dog");
    // img.setAttribute("src",getDog())
    // img.setAttribute(src,link)   // src will be treated as a variable
    img.setAttribute("src",link);

    console.log(link)
})



async function getDog(){        // will return a promise , so we have to use await
    try{
        // let res2 = axios.get(url2);
        // console.log(await res2);     //will show  the whole promise obj not the data
        // console.log(res2);   //pending/fulfileld
        let res2 = await axios.get(url2);
        // console.log("Result is ",res2);
        // console.log("Data is : ",res2.data);
        // console.log("Url link is:",res2.data.message);
        return res2.data.message;      //returning only message from the response

    }catch(er){
        console.log("Error is: "+ er);
        // return "Eror found Baby"
        return "/"
    }
}


const url3 = "https://icanhazdadjoke.com/";

async function getJokes(){
    try {
        const con = {headers: {Accept: "application/json"}}     //First key ->> headera ... rest value ke andar sare header ke pairs honge 
        // let res3 = await axios.get(url3);
        let res3 = await axios.get(url3,con);
        console.log(res3);
        console.log(res3.data);     // will show in html code format ... now we have to convert it into "application/json" format
        //// NOw we have to pass it into a "header"
    }catch(err){
        console.log("Eroro: ",err)
    }
}


let url5 = "http://universities.hipolabs.com/search?name=";
let country = "nepal";

let btn3 = document.querySelector( "#btn3");

btn3.addEventListener('click',async ()=>{
    console.log("Button3 Was clicked ")
    // getColleges(country).then((collegeList)=>{
    //     collegeList.forEach((item)=>{
    //         console.log(`Name of College is ${item}`);
    //     });
    // })
    let country = document.querySelector("input").value;
    console.log(country);
    // getColleges();
    let colArr = await getColleges(country);
    // console.log(colArr);
    show(colArr);
});

function show(colArr){
    let list =document.querySelector("#list")
    list.innerText="";
    for (col of colArr){
        // console.log(col)
        console.log(col.name)
        let li = document.createElement("li");
        li.innerText= col.name;
        list.appendChild(li);
    }
}


// async function getColleges(){
//     try {
//         let res= await axios.get(url5+country);
//         console.log(res);
//     }catch(err){
//         console.log("Error:",err);
//         return [];
//     }
// }


async function getColleges(country){
    try {
        let res= await axios.get(url5+country);
        // console.log(res);
        // console.log(res.data);
        return res.data;
    }catch(err){
        console.log("Error:",err);
        return [];
    }
}


