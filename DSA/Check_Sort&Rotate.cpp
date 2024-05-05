#include<iostream>
using namespace std;

bool check(int arr){
    int n = sizeof(arr)/sizeof(arr[1]);
    int count=0;
    // for(int i =1; i<n; i++){
    for(int i =1; i<n; i++){
        if (arr[i-1]>arr[i]){       // agar array ki value pechle wale se choti hai toh count++
            count++;
        }
    }
    arr[n-1]>arr[0]?count++:count;  // when final elem is larger than the 1st element // if false it simply returns the current value of count the count variable will not be incremented.

    return count<=1;    // count == 0when [1|1|1]
}


int main()
{
 
 
    return 0;
}
