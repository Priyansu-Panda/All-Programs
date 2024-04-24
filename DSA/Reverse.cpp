#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for (int i =0; i< size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void reverse(int arr[], int size){

    int start = 0;
    int end = start+1;`

    // while (start > end){
    while (start < end){
        swap(arr[start], arr[end]);
        start+=2;
        end+=2;
    }
    // while (start < end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
}


int main (){

    int arr[6]= {1,2,9,0,-2,5};  //Declare and initialize an array of size 6 with values.
    int brr[5]= {3,6,-9,10,0};

    reverse ( arr , 6);
    reverse(brr,5);

    printArray(arr,6);   //Print the first array using a function that takes three arguments: the array, its size, 
    printArray(brr,5);   //Print the elements in 'brr' array using a function called 'printArray'.
    
    

    return 0;
}