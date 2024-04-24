// Methods ---- Objects of Functions ---Object ke andar FUnction
////FUNCTIONS defined inside ojects are methods 

let calculator={    // '=' must be written   // 'calculator'---OBJECT 
    num: 789+"abc",    //property:_____
    add: function(a,b){    //METHOD //property:_____
        return a+b;
    },    // ',' mustt  be written
    sub:function(a,b){      //METHOD
        return a-b;
    },
    mul: function(a,b){     //METHOD
        return a*b;
    }
}
calculator={    // '=' must be written 
    add: function(a,b){    //METHOD
        return a+b;
    },    // ',' mustt  be written
    sub(a,b){    //Defining a Method   //METHOD    //Short-hand method 
        return a-b;
    },
    mul(a,b){   //METHOD   //Short-hand method
        return a*b;
    },
    div(a,b){   //METHOD    //Short-hand method
        return a/b;
    }
}

// CALLING --->    object.function();

// calculator //----Object
// calculator()  //--- its not a function


//calculator.num --->
// calculator.add   //---> shows the function
calculator.add(6,5);    // using the add function 