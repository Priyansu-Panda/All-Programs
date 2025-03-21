#include<iostream>
using namespace std;

//  push the max element to the last by adjacent swappings 

void bubble_sort(int arr[], int n){

    bool swaps = true;

    for(int i = 0; i<=n-2; i++){   // last step not needed it will be sorted  // if 6 elements are there ... it will go till 5 steps {0 - 5 .... will go for 0 to 4}
        for(int j = 0; j <= n-i-2 ; j++){
/*
0 - n-1
0 - n-2
0 - n-3
...
*/

    // for(int i = n-1; i>=0; i--){
    //     for(int j = 0; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                // swap()
                int temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;

                swaps = false;
            }
        }
        if(swaps){
            break;
        }
    }
}

void bubble(int arr[], int n){


    for(int i = 0; i<n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
                // swap
            }
        }
    }


    for(int i = n-1; i>=1; i++){
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                // swap
            }
        }
    }
}



int main(){
    int n = 6;
    int a[n] = {10,3,2,5,7,8};
    cout << "Before sort" << endl;
    for(int i = 0; i < n ; i++) cout << a[i] << " ";
    bubble_sort(a, n);
    cout << "After sorting " << endl;
    for(int i = 0; i < n ; i++) cout << a[i] << " ";


   

    return 0;
}