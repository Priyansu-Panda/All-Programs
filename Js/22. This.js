//This ---- Object ke andar method ke andar uss object ki koi property use karne ke liye ... we use THIS keyword 

let student={
    name:"kanrpi",
    age: 69,
    eng:6,
    math:9,
    phy:96,
    prop:this,   // will be refering to th ewindow not the object
    getAvg(){   // method OR function
        console.log(this);   // this ---- refers to this object ----- will print the object student
        // let avg= (eng+math+phy)/3;   // will be throwing error 
        let avg= (this.eng+this.math+this.phy)/3;
        console.log(` ${this.name} got avg marks ${avg}`);
    }
}

function gettAvg(){
    console.log(this);  // refers to the Windows
    let avg= (this.eng+this.math+this.phy)/3;
    console.log(` ${this.name} got avg marks ${avg}`);
}