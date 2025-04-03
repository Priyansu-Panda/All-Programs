#include<iostream>
using namespace std;

bool f(int arr[], int n, int x){
    int l = 0, h = n-1;
    while(l <= h){
        int mid = (l + h) / 2;

        if(arr[mid] == x) return true;
        if(arr[mid] == arr[l] && arr[mid] == arr[h]){
            h--;
            l++;
            continue;
        }
        // left sorted 
        if(arr[l] < arr[mid]){
            if(arr[l] <= x  && x <= arr[mid] )  h = mid - 1;    // if x exists in the sorted region
            else    l = mid + 1;    
        }
        // right sorted
        else{       // arr[mid] < arr[h]
            if(arr[mid] <= x && arr[h] >= x)    l = mid + 1;
            else h = mid - 1;
        }  
    }
    return false;
}


int main()
{
    int arr[] = {3,3,1,2,3,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    f(arr, n, 3);
 
    return 0;
}