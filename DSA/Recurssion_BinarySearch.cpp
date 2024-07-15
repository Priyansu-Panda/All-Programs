#include<iostream>
using namespace std;

bool BinaryS(int *arr, int n, int ele){
    
    if(n == 0){
        return false;
    }

    int mid = (n)/2;

    if (arr[mid] == ele){
        return true;
    }
    if (arr[mid] < ele){
        return BinaryS(arr+mid+1, n-mid-1,ele);
    }
    // else (arr[mid] > ele){
    if (arr[mid] > ele){
        return BinaryS(arr, n-mid-1,ele);
    }
    return false;
    // return BinaryS(arr+1,n-1,ele);
}


bool BinarySearch(int *arr, int s, int e, int ele){
    if(s>e){
        return false;
    }
    
    // int mid = (s+e)/2;
    int mid = s+(e-s)/2;
    cout << "Value of mid is " << arr[mid] << end;

    if(arr[mid] == ele){
        return true;
    }
    if(arr[mid] < ele)
        return BinarySearch(arr, mid+1, e, ele);
    else
    {
        return BinarySearch(arr, s, mid-1, ele);
    }
}
 
int main()
{
    int arr[4] = {1,2,3,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ele = 3;
    cout << BinaryS(arr,n,ele) << endl;  
    cout << BinarySearch(arr,0,n-1,ele) << endl;  
 
    return 0;
}