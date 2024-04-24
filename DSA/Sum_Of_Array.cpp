#include<iostream>
using namespace std;

int sum (int arr[], int size){
    int  s = 0 ;
    for(int i = 0; i < size; i++){
        s+=arr[i];
    }
    return s;
}


int main(){

    int arr[50];
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    cout << "Enter the Elements: ";
    for(int i = 0; i<n; i++){
        cout <<endl << "Element " << i << " arr[" << i << "]: ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "The sum of The array: "<< sum (arr,n)<< endl;
}