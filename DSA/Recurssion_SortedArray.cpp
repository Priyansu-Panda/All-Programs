#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){

    if(size == 0 || size == 1){   // base CAse
        return true ;
    }

    if(arr[0] > arr[1]){
        return false;   
    }
    else{
        bool remain = isSorted(arr+1, size-1);
        return remain;
    }
} 

int main()
{

    int arr[5] = {2 ,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool ans = isSorted(arr,n);
    cout << (ans ? "Sorted":"Not Sorted") << endl;


    return 0;
}