#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high, int n){
    int temp[] = {};

    int left = low;
    int ryt = mid+1;
    int i = 0;
    while(i <= n && left <= mid && ryt <= high){
        if(arr[left] < arr[ryt]){
            temp[i] = arr[left];
            // temp[left] = arr[left];
            i++;
            left++;
        }
        else{
            temp[i] = arr[ryt];
            ryt++;
        }
    }
    while(left <= mid){
        temp[left] = arr[left];
        left++;
    }
    while(ryt <= high){
        temp[ryt] = arr[ryt];
        ryt++;
    }

    i=0;
    while(){
        arr[i] = temp[i];
        i++
    }
}

void sort(int arr[],int low, int high, int n){

    if(low >= high){
        return;
    }
    int mid = (low+high)/2;

    msort(arr,low,mid);
    msort(arr,mid+1,high);

    merge(arr,low,mid,high, n);
}


int main()
{
 
 
    return 0;
}