function table(table){
    for (let i=0; i<=10;i++){
        console.log(`${table} x ${i} = ${table*i}` );
    }
}

table(5);

// OR

console.log(" ")
function table1(n){
    for (let i=0; i<=n*10;i+=n){
        // console.log(`${table} x ${i} = ${table*i}` );
        console.log(i);
    }
}

table1(6);