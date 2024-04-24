// Kisi bhi normal function mein async KEyword lagado ... the function becomes a async function
// Async Functions always return promises.

async function greet(){
    // throw "404 Error obtained babuji"    //throws an error
    return "hello";
}

// greet();     // returns a promise .... evenif we dont write the promise keyword

greet()
    .then((result)=>{
        conaole.log("Promsie Accepted ");
        console.log("result is: ",result);
    })
    .catch((error)=>{
        console.log( "promise rejected with error: ", error)
    })

//  We can even make an arrow function as a async function 

// let demo = ()=>{return 5};   //normal function
let demo = async ()=>{return 5};   //returns a promise 


// ------------------------------------


// AWAIT

// it pauses the execution of it's surrounding code until the awaited Promise settles to either fulfilled ("resolved") or rejection ("rejected")  i.e promise doesnt remain pending
// await keyword works only inside async functions


// function getNum(){         //NOrmal Function 
//     return new Promise((resolve, reject)=>{         //means ---> the promise will be either accepted or rejected
//        let num = Math.floor(Math.random()*10)+1;
//        console.log(num);
//     });
// };

function getNum(){          //Asyncronouse function----> WHen Claed Returns a Promise 
    return new Promise((resolve, reject)=>{         //means ---> the promise will be either accepted or rejected
        setTimeout(()=>{            // Just to make it more asyncronous
            let num = Math.floor(Math.random()*10)+1;
            console.log(num);
            resolve("Promise Rsolved ")
        },1000);
    });
};

// function demo(){     //Normal Function
//     getNum();        //returns a random no. 
//     getNum();
//     getNum();
// }

// async function demo(){   //Asyncronouse function----> WHen Claed Returns a Promise       // sab kuch ek sathhi display kardega 
//     getNum();        // returns a random no. in form of a Promise 
//     getNum();
//     getNum();
// }

async function demo(){      //wait for the desired ... then display the rest 2 sudeenly 
    await getNum();     // Ek call complete ho tab dusri  call aye .... Then we use await keyword 
    getNum();
    getNum();
}
async function demo(){     
    await getNum();
    await getNum();
    getNum();
}

let h1 = document.querySelector("h1");
function color(color,delay){
    return new Promise ((resolve,reject)=>{     
        setTimeout(()=>{
            h1.style.color=color;
            console.log(`Color ${color} Updated`);
            resolve ("Colour Chnaged ");
        },delay)
    })
}

async function Change(){
    await color("red",1000)
    await color("blue",1000)
    await color("orange",1000)
    await color("green",1000)
    await color("brown",1000);
}



function changeColor(color,delay){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            h1.style.color=color;
            console.log(`Color ${color} Changed `)   /// use this while in async await 
            resolve("canged Color");
        },delay);
    });
}

async function Change(){        // Change is a function is ke andar we call the ChangeColr function 
    await changeColor("red",1000)
    await changeColor("blue",1000)
    await changeColor("orange",1000)
    await changeColor("green",1000)
    changeColor("brown",1000);    // this will be skipped
    changeColor("Yellow",1000);
}

Change();


function changeColor(color,delay){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            let num = Math.floor(Math.random()*5)+1;
            if(num>3){
                reject ("promise  reject ho gya");
            }
            h1.style.color=color;
            console.log(`Color ${color} Changed `)   /// use this while in async await 
            resolve("canged Color");
        },delay);
    });
}


// async function Change(){        // Change is a function is ke andar we call the ChangeColr function 
//     await changeColor("red",1000)
//     await changeColor("blue",1000)
//     await changeColor("orange",1000)
//     await changeColor("green",1000)
//     changeColor("brown",1000);    // this will be skipped
//     changeColor("Yellow",1000);


//     let a = 10;
//     console.log(a);         // agar kuch bhi error aata hai upar  then it wont be printed  Altough it isnt dependdent on promises 
//     console.log("new no. is: ",a+a+1);      // agar kuch bhi error aata hai upar  then it wont be printed 
// }



async function Change(){        // Change is a function is ke andar we call the ChangeColr function 
    try{                //jab bhi humare paas kuch promise hota hai there is certain chance that rejection may occur so we use try catch
    await changeColor("red",1000)
    await changeColor("blue",1000)
    await changeColor("orange",1000)
    await changeColor("green",1000)
    changeColor("brown",1000);    // this will be skipped
    changeColor("Yellow",1000);
    }
    catch(err){    //To hnadle rejections     //agar kuch bhi error ya toh catch ke andar chala jayega
        console.log("Error caught");
        console.log(err);
    }

    let a = 10;
    console.log(a);         // agar kuch bhi error aata hai upar  then it wont be printed 
    console.log("new no. is: ",a+a+1);      // agar kuch bhi error aata hai upar  then it wont be printed 
}

Change();


