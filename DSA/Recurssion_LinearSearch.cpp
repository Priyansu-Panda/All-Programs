#include<iostream>
using namespace std;
 
    void printArr(int *arr, int n){
        cout << "SIZE OF ARR is " << n << endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }
    bool LinearS(int *arr, int n, int ele){

        printArr(arr,n);

        //BASE CASE
        if (n == 0){
            return false;
        }
        if (arr[0] == ele){
            return true;
        }
        bool remainPart = LinearS(arr+1,n-1,ele);
        // return LinearS(arr+1,n-1,ele);
        return remainPart;

    }
int main()
{
  
    int arr[4] = {1,2,3,4};
    int ele = 3;
    cout << LinearS(arr,4,ele) << endl;   
    // 1 -> TRUE 
    // 0 -> FALSE
 
    return 0;
}