#include<iostream>
using namespace std;

int bs(int arr[], int n, int key){
    int low = 0, high = n-1, mid, l = n;

    while(low<=high){
        int mid = low + (high - low)/2;

        if(key >= arr[mid]){
            low = mid + 1;
        }
        else{
            l = mid;
            high = mid - 1;
        }
    }
    return l;
}
int main(){
    int arr[] = {1,2,3,5,6,7,8,9};
    cout << arr[bs(arr,sizeof(arr)/sizeof(arr[0]), 4)]<< endl;
    
    return 0;
}