// let todo= [];

// while(true){
//     let req =prompt("please enter ur request");
//     if (req=="quit"){
//         console.log("quitying now");
//         break;
//     }
//     if (req=="list"){
//         console.log("______________");
//         // for(task of todo){
//             // console.log(task);
//         for(let i =0; i<todo.length;i++){
//             console.log(i, todo[i]);
//         }
//         console.log("______________");
//     }

//     else if(req == "add"){
//         let task= prompt("please add the new task");
//         todo.push(task);
//         console.log(`so ur "${task}" is added`);
//     }else if (req == "delete"){
//         let del= prompt(`Please enter the index number of ur list that u wanna delete`);
//         todo.splice(del,1);
//         console.log(`task with index ${del} "${todo[del]}" is now deleted `)
//     }else{
//         console.log("Sorry u have entered wrong prompt");
//     }
//         // req =prompt("please again enter ur request");
// }



let todo  = [];
let req = prompt ("Enter ur Request");
while(true){
    if (req== "quit"){
        console.log("Quitting app");
        break;    
    }
    // else if ( req =="list"){
        console.log("_------_");
    if ( req =="list"){
        // for (list of todo){
        //     console.log(list);
        // }
        for (let i= 0; i <todo.length;i++){
            console.log(i, todo[i]);
        }
    console.log("_------_");
    }else if (req =="add"){
        let task = prompt ("please add ur task");
        todo.push(task);
        console.log("TAsk added");
    }else if (req == "delete"){
        let del = prompt("PLease Enter the no.");
        todo.splice(del,1);
        console.log(`task ${del} ${todo.del} has been deleted `);
    }
    req = prompt ("Again Enter ur Request");
}