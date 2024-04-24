#include<iostream>
using namespace std;


void update(int arr[], int size){
    
    cout << "Inside The Function " << endl;

    //Updating first element in arry
    arr[1] =69;

    for (int i=0 ; i<3; i++ ){
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Back TO Main Function" << endl;
}

int main (){
    int arr[3] = {1,2,3};

    update (arr, 3);

    cout << endl << "In Main Function "<< endl;

    for (int i=0 ; i<3; i++ ){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}