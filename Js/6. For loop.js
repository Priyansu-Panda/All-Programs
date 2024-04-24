// Odd noo.s

for(let i= 1; i <=15; i=i+2){
    console.log(i);

}
for(let j= 15; j >=1; j=j-2){
    console.log(j);
    
}
for(let i= 2; i <=15; i=i+2){
    console.log(i);

}
// or
for(let j= 1; j <=15; j=2*j){
    console.log(j);

}

for(let i =1 ;i<=10; i++){
    console.log( i=5*i);
}
for(let i =5 ;i<=50; i=i+5){
    console.log(i);
}



//multiplication table

let n =prompt(`Write the no`);
n=parseInt(n);    //prompt will give string this funvtio---parseInt converts anything to sring 
for(let i = n; i <=n*50 ; i=i+n){
    console.log(i);
}



//nested loop

for (let i = 1; i<=4; i++){
    for (let j =1 ; j<=3; j++){
        console.log(`outer loop :${i},${j}`);
        console.log();
        console.log(i);
        console.log();
        console.log(j);
        console.log();
    }
}


let i = 1;
while(i<=5){
    console.log(i);
    i++;
}
i = 5;
while(i>=1){
    console.log(i);
    i++;
}
let a = 0;
while(a<=20){
    console.log(a);
    a=a+2;
}
a = 1;
while(a<=20){
    console.log(a);
    a=a+2;
}

// ARRAYS

let fruits =["Apple",`BAnana`,"mango","Kela"];
fruits.push("pinaaple");
fruits.unshift("pomegranate");
// for(i=0; i<fruits.length;i++){
for(let i=0; i<fruits.length;i++){
    console.log(i+1,".",fruits[i]);
}
for(let i=fruits.length-1; i>=0;i--){
    console.log(i,".",fruits[i]);
}


// NESTEED ARRAYS

let heros= [["Kan", "Pri", "KAnpri"],["Priya","ansu"]];

for (let i =0; i<heros.length;i++){
    console.log(`#Outer Array ${i}`);
    for(let j = 0; j<heros[i].length;j++){
        console.log(`Inner Array ${heros[i]},,${heros[j]} `,heros.length);
        console.log();
        console.log(`Inner Array ${heros[i][j]}`,heros.length);
        console.log();
    }
}

// Output 

/* #Outer Array 0
Inner Array Kan,Pri,KAnpri,,Kan,Pri,KAnpri  2
Inner Array Kan 2
Inner Array Kan,Pri,KAnpri,,Priya,ansu  2
Inner Array Pri 2
Inner Array Kan,Pri,KAnpri,,undefined  2
Inner Array KAnpri 2
#Outer Array 1
Inner Array Priya,ansu,,Kan,Pri,KAnpri  2
Inner Array Priya 2
Inner Array Priya,ansu,,Priya,ansu  2
Inner Array ansu 2
 */

let student =[["KAn",69],["Pri",96],["KAnpri",33,69.96]];

for(let i =0; i<student.length;i++){
    console.log(`info of student ${i},,${student[i]}`);
    for(let j = 0; j<student[i].length;j++){
        console.log(`${student[i][j]}`);
    }
    console.log(``);
}

// OUtput
/*
info of student 0,,KAn,69
KAn
69

info of student 1,,Pri,96
Pri
96

info of student 2,,KAnpri,33,69.96
KAnpri
33
69.96
*/


// For of loop

// for(element of collection)

let phal =["Apple",`BAnana`,"mango","Kela"];

for(aam of phal){
    console.log(aam);
}

let alpha ="PriyaNsu kumAr   Panda";   //t treats consecutive spaces as a single space character. This is part of the default behavior in JavaScript.

for(naam of alpha){
    console.log(naam);
}


/*let alpha = "PriyaNsu kumAr   Panda";

// Split the string into words
let words = alpha.split(/\s+/);

// Iterate through the words
for (naam of words) {
    console.log(naam);
}*/ 


let stud =[["KAn",69],["Pri",96],["KAnpri",33,69.96]];

for(list of stud){
    console.log(list);
    for(detail of list){
        console.log(detail);
    }
    console.log();
}

// Output

/*[ 'KAn', 69 ]
KAn
69

[ 'Pri', 96 ]
Pri
96

[ 'KAnpri', 33, 69.96 ]
KAnpri
33
69.96
*/
