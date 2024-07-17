#include<iostream>
using namespace std;

void bubble(int *arr, int n ){

    for(int i = 1; i<n; i++){
        // for round 1 to n-1 ;
        bool swapped = false;

        for(int j = 0; j<n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false){
            // already sorted 
            break;
        }
    }
}


void bubbleR(int *arr, int n){

    // base case - Already Sorted 
    if (n==0 || n == 1){    
        return;
    }
    // 1 CASE - bade wale ko end mein pahauncha diya 
    // for(int i = 0; i<n; i++){    //is iterating up to n, but it accesses arr[i + 1], which goes out of bounds when i is n-1. This leads to undefined behavior and can result in garbage values
    for(int i = 0; i<n-1; i++){

        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    // sort rest 
    bubbleR(arr,n-1);
}


int main()
{
    int arr[] = {1, 5, 8, 4, 7};
    
    int n = sizeof(arr)/sizeof(int);
    bubbleR(arr, n);
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    bubble(arr, n);
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
 
 
    return 0;
}