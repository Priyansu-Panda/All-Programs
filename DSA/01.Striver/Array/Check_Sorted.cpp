#include<iostream>
using namespace std;


int isSorted(int n, int arr[]){
    
    for(int i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}
 
int main()
{
    int arr[] = {2,2,3,5,1,29,26,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // for(int i = 0; i < n; i++){
    //     if()
    // }   
    int i=0;
    while (i<n){
        if(arr[i] <= arr[i+1]){
            cout << "sorted " << endl;
            i++;
        }
        else{
            cout << "Not sorted " << endl;
            break;
        }
    }
    cout << "sorted " << endl;

    cout <<isSorted(n, arr)<< endl;

 
    return 0;
}