// function saveToDb(data){
//     let  internetSpeed = Math.floor(Math.random()*10)+1
//     if (internetSpeed>4){
//         console.log("Your Data Is saved");
//     }else{
//         console.log("Weak Connnection");
//     }
// }

// saveToDb("Kanpri");



function saveToDb(data,success,failure){        //  // Sucess and failure will be functions Or Callbacks...because we have called then in the function    saveToDB("",()=>{},()=>{})    
    let internetSpeed = Math.floor(Math.random()*10)+1
    if (internetSpeed>4){
        //  console.log(data),success();
        success();
    }else{
        failure();
    }
}

// saveToDb("Mater Kanpri",()=>{
//     console.log("Ur data is sucessfullly Saved ");
// },()=>{
//     console.log("SOrry Sir ");
// })



//// SAME

// saveToDb(
//     "Kanpri", ()=>{
//     console.log("Your Data Is saved");
//     },()=>{
//     console.log("Weak Connnection");
//     }
// );




// saveToDb("Kanpri",()=>{
//     console.log("SUccess 1");
//     saveToDb("Master ",()=>{          //If gets succesed then call this ...else wont be  called
//         console.log("Sucess 2");
//     },()=>{
//         console.log("Failire 2")
//     })
// },()=>{
//     console.log("Failure 1");
// })




saveToDb(
    "Kanpri", ()=>{
    console.log("Sucess: Your Data Is saved");

    saveToDb("Hello sir ", ()=>{   //If gets succesed then call this ...else wont be  called
        console.log("Sucess2: Your Data Is saved");
        saveToDb("Welcome to the world of Kan",()=>{    ////If gets succesed then call this ...else wont be  called
            console.log("Sucess3: Your Data Is saved");
        },()=>{
            console.log("Failure3: Weak Connnection");
        })
    },()=>{
        console.log("Failure2: Weak Connnection");
    })
    },function(){
    console.log("Failure: Weak Connnection");
    }
);

// SavetoDb ko pata nahi hai ki sucess hog a ya failure but itna guarantee hai kuch toh hoga ...kuch toh return karnga  
//// Asynchronous Function ---> Function depending upon a variety of factors 
// Promise--- represent eventual completion or failure of an Asynchronous Operation & its resulting value 

// Promise--->Object
// Promise---3 states ---> Fulfilled ...pending ...rejected 
// Promise--->Object  ---> .then() {fullfiled hoone ke badd jo kaam ho} & .catch() {catch rejcetd error}   {Methods}

function saveToDb(data){     //hum saveToDb ko call akenge then 
    // return new Promise((success, failure)=>{
    return new Promise((resolve, reject)=>{         //we will be getiing a promise object
        let  internetSpeed = Math.floor(Math.random()*10)+1
        if(internetSpeed>4){
            // success();
            // success("Your Data Is saved");

            // resolve()    //("result"--->undefined) --- Andar kuchu nahi likha hai
            //resolve(data , " Sucess: Your Data Is saved " //data wont be displaeyed 
            resolve(data + " Sucess: Your Data Is saved "+internetSpeed);    //agar sucess ho jaye toh ---> resolve wale function ko call kardo    // ("result")
            // resolve("Your Data Is saved");
        }else{
            // failure();
            // failure("Failure: Weak Connnection")
            
            // reject()    //("error"--->undefined)--- Andar kuchu nahi likha hai
            // reject(data,"Failure: Weak Connnection")   //data wont be displaeyed 
            reject(data+" Failure: Weak Connnection "+internetSpeed)        //agar fail ho jaye toh ---> reject wale function ko call kardo  //("error")
            // reject("Failure: Weak Connnection")
        }
    })
}

// saveToDb("KAnpri");




// saveToDb("KAnpri",()=>{
//     console.log("Sucess ur data is saved");    //resolve()
// },()=>{
//     console.log("Sucess ur data is saved")   //reject()
// });




// let request =  saveToDb("kanpri");   //request --->Promise Object

// console.log(request)

// request.then(()=>{     //agar promise sucessful ho jaye  //BUt as earlier the Promise Statement wont be printed    //.then()  --> Khud ek callback leta hai 
//         console.log("Promise solve ho gaya")
//         console.log(request);        //the Promise Statement will be printed
//     })
//     .catch(()=>{     // request.catch() --->wapas nahi likhna     //agar promise Fail ho jaye     //BUt as earlier the Promise Statement wont be printed 
//         console.log("Promeise Rejected")
//         console.log(request);        //the Promise Statement will be printed

//     });


//          OR


////          More Compact   ---> rather than putting it in a variable 


// saveToDb("kanpri").then(()=>{        // Hum yahan humare function ko call karenge --- as a result humara promise object aajayega ... ab uss object pe then aur cath waley methods lagayenge
//     console.log("Promise solve ho gaya")
//     //console.log(request);        //the Promise Statement will be printed
// })
// .catch(()=>{
//     console.log("Promeise Rejected")
//     //console.log(request);        //the Promise Statement will be printed
// });


//          OR


// saveToDb("kanpri")
// .then(()=>{
//     console.log("Promise solve ho gaya")
// })
// .catch(()=>{
//     console.log("Promeise Rejected")
// });



// saveToDb("kanpri")
// .then(()=>{
//     console.log("Promise solve ho gaya")
//     // return saveToDb("shivam");
//     saveToDb("Welcome sir").then(()=>{
//         console.log("Data2 Saved")
//     })
// })
// .catch(()=>{        //Kabhi bhi failure aaye
//     console.log("Promeise Rejected")
// });


////    PROMISE CHAINING

// saveToDb("kanpri")
// .then(()=>{
//     console.log("Promise solve ho gaya")
//     // return saveToDb("shivam");
//     return saveToDb("Welcome sir")      //.then method ka output is a new "promise"
// })
// .then (()=>{       // welcome sir ke liye 
//     console.log("Promise 2 Saved ");
// })
// .catch(()=>{        //Kabhi bhi Error/failure aaye then print this 
//     console.log("Promeise Rejected")
// });


// saveToDb("1St")
// .then(()=>{
//     console.log("Data 1 Saved")
//     return saveToDb("2nd");
// })
// .then(()=>{
//     console.log("Data2 Saved")
//     return saveToDb("3RD")
// })
// .then(()=>{
//     console.log("Data3 : Saved")
// })
// .catch(()=>{
//     console.log("Promise Rejected")
// });

// saveToDb("1st")
//   .then(() => {
//     console.log("Data 1 Saved");
//     return saveToDb("2nd");
//   })
//   .then(() => {
//     console.log("Data 2 Saved");
//     return saveToDb("3rd");
//   })
//   .then(() => {
//     console.log("Data 3 Saved");
//   })
//   .catch((error) => {
//     console.log("Promise Rejected:", error);
//   });



////    PROMISE CHAINING

saveToDb("1St")
.then((res)=>{
    console.log("Data 1 Saved")
    console.log(res)
    ////returning a promise here
    ////returning the data from first promise to be used in next then() block
    ////returning the promise from a then() so that it can be chained to another Promise
    return saveToDb("2nd");
})
.then((res)=>{
    console.log("Data2 Saved")
    console.log(res)
    return saveToDb("3RD")    //("data")
})
.then((resu)=>{
    console.log("Data3 : Saved")
    console.log(resu)
})
.catch((er)=>{
    console.log("Promise Rejected")
    console.log(er)
});


