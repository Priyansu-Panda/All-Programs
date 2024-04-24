#include<iostream>
using namespace std;


bool search(int arr[], int size , int key ){
    for(int i = 0; i<size; i++){
        if (arr [i] == key ){
            return 2; 
        }
    }
    return 0;   //return false when the element is not found in array.
}

int main(){

    int arr[10]= {12,5,-0,69,-96,20,10,-30,10,1};

    cout << "Enter the Elemetnt to search for " << endl;
    int key ;
    cin >> key;

    bool found = search(arr, 10, key);    // boolean function will return boolean value 

    if  (found){cout << "Key is present " << endl;}
    else{
        cout << "KEy is Absent " << endl;
    }
    return 0;
}