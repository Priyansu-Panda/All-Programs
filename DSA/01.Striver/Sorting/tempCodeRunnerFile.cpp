#include<iostream>
using namespace std;

void insertion(int arr[], int n){
    int t, min;
    for(int i = 0; i<=n-1; i++){
        for(int j = i+1 ; j<n ; j++){
            // if(arr[j]<arr[j+1])
            min = j;
            t = j-1;
            if(arr[t] > arr[min]){
                // swap
                int temp = arr[min];
                arr[min] = arr[t];
                arr[t] = temp;
                t--;
            }
        }
    }
}


int main(){

    int n = 6;
    int arr[n] = {9,8,7,6,4,5};

    cout << "Before Sorting" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    insertion(arr,n);
    cout << endl << "AFter Sorting" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

}