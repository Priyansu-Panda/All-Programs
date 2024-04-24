let students={
    name: "Priyansu",   // Property1
    age: 19,
    branch: "CSE",
    gender: "Male",
    null:"abc",
    1:"1",
    2:3,
    true:4
}
students[2];// js first converts the 2 to string then acess its values 
students[null];
students["age"];

//Add or Updtate value
students.dist="Cuttack";   //Addded
students.gender="Female";  //Updated
students.Marks=96.69;
students.Marks="Six69nine";
students.Marks=[69,96,"69.96"];

delete students.branch;  //Deleted

// students.age=["age",gender,18];
students.age=["age",96.69,students,18];
students.age=["age",96.69,18];
console.log(students);


// Twitter Thread 

posts={
    user:["Kan", "Pri"],
    contnt:"This is my #first post",
    lieks:69+"still counting",
    repeat:69,
    tags:["U", "Babay",69],
    
}
console.log(posts);
posts.user[1];
posts.lieks;

let prop="user";
posts[prop]; //posts.user
posts["repeat"];  //posts[repeat] wont work untill repeat is a variable itself

console.log("----------------------------");

// Objects of Objects--- Nesting

let info={   //OBJ  //information of Multiple Students
    kan:{    // OBJ 1
        name:"Kan",
        age:19,
        place:"Cuttack"
    },
    pri:{},     // OBJ 2   Empty Object
    kanpri:{    // OBJ 3
        name:"kanPri",
        age:69,
        place:"Cuttack"
    }
}
console.log(info);
console.log(info.pri);
console.log(info.kan);
console.log(info.kan.age);

info.kan.age=20;  //Updation
info.kan.gender="male"; // Addition

console.log(info.kan);

console.log("----------------------------------");


// Array of Objects  --Array ke andar Bahaut sare Objects

// Arr =[{},{},{}]   Array of Objects ---Array ke andar no. of Objects
// Arr =[[],[],[]]    Array of Array


info=[  //Array conating Objects

    {
    kan:[    // ARRAY of 2 Elements 
        {  // Thsi 'obj' kan is an 'Array' containing 'its 2 objects'
        name:"Kan",
        age:[19, "Jammu", 69.96],
        place:"Cuttack"
    },

    {
    kanpriya:{   //Nested Objects
        name:"kanPri",
        age:69,
        place:"Cuttack"
    }
    }
    ],

    pri:{
        name:"Kanu",
        age:[69, "Jammu", 96.96],
        place:"Cuttackia"
    }
},

{
    pri:{}   //Empty Object
},

{
    kanpri:{   //object containing objects     NESTED OBJECT
        name:"kanPri",
        age:69,
        place:"Cuttack"
    },

    priya:"PRiyadarshini"
}

]

info[0].kan[1].kanpri.place="bbsr";   // cretes/cheanges a key in object kanpri
info[0].kan[1].gender="Female";  // creates a separate obj after kanpri
console.log(info[0].kan[1].place);
console.log(info);
// console.log(info.pri);
// console.log(info.kan);
// console.log(info.kan.age);
// info.kan.age=20;
// info.kan.gender="male";
// console.log(info.kan);


console.log("----------------------------------");


let num =Math.random();    // betwn 0-1   but not 1
console.log(num);

num= num*10;
console.log(num);

num=Math.floor(num);
console.log(num);

num = num+1;     // range 0-9 ke jagah 1-10 hoo
console.log(num);


num =Math.floor(Math.random()*10)+1;
// console.log(Math.random());  // it will another random value
console.log(num);

console.log("_______________");

console.log(Math.PI);    //3.14
console.log(Math.E);    //2.71

console.log("_______________");

console.log(Math.abs(5));
console.log(Math.abs(5.5));
console.log(Math.abs(-5));   
console.log(Math.abs(-5.5));    //Removes -ve sign

console.log("_______________");

console.log(Math.floor(5));     // Floor--Smallest and Ceil--Largest removes DECIMAL NO>
console.log(Math.floor(5.999));   //5
console.log(Math.floor(-5));
console.log(Math.floor(-5.99));    //-6

console.log("_______________");

console.log(Math.ceil(5));
console.log(Math.ceil(5.001));    //6
console.log(Math.ceil(-5));
console.log(Math.ceil(-5.0001));   //-5

console.log("------------------");

console.log(Math.pow(2,4));  

console.log(2**5);  
console.log(Math.pow(2,5));


console.log(Math.floor(Math.random()*100)+1);  //1-100  // or floor(num)+1
console.log(Math.floor(Math.random()*5)+1);   //1-5

console.log(Math.floor(Math.random()*5)+20);   //20-24
console.log(Math.floor(Math.random()*5)+21);   //21-25
console.log(Math.floor(Math.random()*6)+20);   //20-25