#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1)
        return n;

    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
 
int main()
{

    cout << fibo(3)<< endl;
    // fibo(3) -> fibo(2)-->fibo(1)==1 & fibo(0) == 0 <-0+1 = 1 << 1+ fibo(1)==1 << 1+1 = 2  
       return 0;
}