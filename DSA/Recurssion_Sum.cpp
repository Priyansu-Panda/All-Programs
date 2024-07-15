#include<iostream>
using namespace std;

int SumArr(int arr[], int n){

    int sum;

    if (n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
  
        // sum = sum + arr[0] + SumArr(arr+1 , n-1);
        int remaining = SumArr(arr+1,n-1);
        sum =  arr[0] + remaining;
        // sum =   remaining + arr[0] ;     // SAME 
        return sum;
    
}


int main()
{
 
    int arr[4] = {1,2,3,4};
    cout << SumArr(arr,4) << endl;
 
    return 0;
}