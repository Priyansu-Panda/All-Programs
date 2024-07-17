#include<iostream>
using namespace std;

int pow(int a , int b){

    if (b == 0){
        return 1;
    }
    return a*pow(a,b-1);
}

int pow2(int a,int b){
    int ans = 1;
    for(int i = 0; i<3; i++){
        ans = ans * 2;
    }
    return ans;
}

int optPow(int a , int b){  
    if(b==0){
        return 1;
    }
    if (b==1){
        return a;
    }
    int ans = pow(a,b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    if(b%2 != 0){
        return ans*ans*a;
    }
}
/*
a^b   
    a^b/2 * a^b/2 * a^1 if b is odd
    a^b/2 * a^b/2 if b is even
*/

/*
3^11 = 3x(3^10)==3x(3^5 x 3^5)== 3x(3^5)^2... now same goes with 3^5
p(3,11) -> p()
*/

int main()
{
    cout << "Value is " <<pow(2,3)<< endl ;

    cout << "Value is " <<pow2(2,3);

    cout << "Value is " <<optPow(2,3);
 
    return 0;
}