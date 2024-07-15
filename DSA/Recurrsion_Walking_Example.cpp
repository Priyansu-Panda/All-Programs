#include<iostream>
using namespace std;


void walk(int src, int dest){

    if(src == dest ){   // base case
        cout << "Pahaunch GAYA"<< endl;
        return;
    }
    // 1 pe hai toh 2 pe jayega .. 2 pe hai toh 3 pe jayega 

    else{   // recurssive call
        cout << "Pahaunch RHA HU"<< endl;
        // walk(src++,dest);    // The src++ post-increment operator increments src after its value has been passed to the function, so the same value of src will be passed in each recursive call.
        walk(src+1,dest);    // The src+1 pre-increment operator increments src
    }
    /*
    // PROCESSING 
    src++;

    // RECURSSIVE CALL
    walk(src,dest);
    */
}
 
int main()
{
    
    int src = 1;
    int dest = 10;

    walk(src,dest);
 
    return 0;
}