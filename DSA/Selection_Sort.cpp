// this is mostly used in Samll sized arrays 
// O(n^2)

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0;  i < n-1; i++ ){    // i = n-1 becoz ---> last elem by the end would be sorted automatically 
        int minIndex = i; 
        
        // this loop is for finding the minIndex
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){       // Age jao aur dekho koi minIndex ke value se chota hai ya nahi ... agar hai then...update minIndex.. ussey swap karddo ... 
                minIndex = j;   //find for the smallest element in the entire array to the right of the i-th elem.... then  swap it with the i-th elem
            }
        }
        swap(arr[minIndex],arr[i]);     
        // [65|25|24|12|11] -> [11|25|24|12|65] 
        // [11|25|24|12|65]  -> [11|12|24|25|65] 
    }
}

int main()
{
  
 
    return 0;
}