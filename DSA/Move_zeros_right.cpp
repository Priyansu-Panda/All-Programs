#include<iostream>
using namespace std;
 
// void moveZ(int arr[],int arr2[], int n){
//     int k =0, i=0, j=0;
//     // for (i = 0; i < n; i++){

//     while(i<n){
//         if(arr[i]!=0){
//             arr2[j] = arr[i];
//             j++;
//         }
//         //  if arr[i] is zero, i will not increment, and the loop will check the same element again in the next iteration. This could potentially lead to an infinite loop if there are consecutive zeros in the array arr
//             i++;
//     }
//     while(j<n){
//         // arr2[j] = {0}; error : cannot assign value to array element
//         arr2[j] = 0;
//         j++;
//     }
// }

void moveZ(int arr[],int arr2[], int n){
    int i = 0;

    for(int j = 0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[j], arr[i]);   // j will be > i .. i will contain 0 when j proceed so when !=0 then swap with the)th Ellment
            i++;
        }
    }
}

void print(int arr[], int n){
    cout<< "Ur Modified array " <<endl;
    for (int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[]= {0,1,0,3,0,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    print(arr,n);
    moveZ(arr,arr2,n);
    print(arr2,n);

    return 0;
}