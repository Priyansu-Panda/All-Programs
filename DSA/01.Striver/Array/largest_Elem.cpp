#include<iostream>
using namespace std;


int main(){

    int arr[] = {3,2,5,9,6,1};
    // cout << sizeof(arr)/sizeof(arr[0]) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    for(int i = 0; i<n; i++){
        if (arr[max] < arr[i]){
            max = i;
            // cout << max << endl;
        }
    }

    cout << "MAX : " << arr[max] << endl;


    return 0;
}