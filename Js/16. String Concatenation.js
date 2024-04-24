// let str =["Kan",nstr,"Pri",69,];   //first intialise nstr
let nstr = ["Priya", "darshinshi"];
let str =["Kan",nstr,"Pri",69,];

function conc(st){
    let result= "";
    for(let i = 0;i <st.length;i++){
        result+=st[i];
    }
    return result;
}
console.log(conc(str));
