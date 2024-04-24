#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for (int i =0; i<size; i++){
        cout<< arr[i] << " ";
    }cout<< endl;
}

void Swap(int arr[],int size){

    for (int i =0; i<size;i+=2){
        if (i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main (){

    int even[8]={8,2,6,7,3,9,2,1};
    int odd[5]= {5,4,6,93,8};

    Swap(even,8);
    printArr(even, 8);

    Swap(odd,5);
    printArr(odd,5);


    return 0;
}