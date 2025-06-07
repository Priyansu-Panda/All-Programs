#include<iostream>
using namespace std;
 
void peak(int arr[], int n){
    int max = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] >= max)    max = arr[i];
        // max = arr[i] > max ? arr[i] : max;

        if(arr[i]<max)  break;
    }
    cout << max << endl;
}
 
void peak2(int arr[], int n){
    int max = -1;
    int l= 0, h = n-1, m;
    while(l<h){
        m = (l+h)/2;

        // Peak
        if(arr[m]>arr[m+1] && arr[m]>arr[m-1])  {
            cout << m << endl;
            return;
        }
        // Left -> Ryt
        else if(arr[m]<arr[m+1] && arr[m]>arr[m-1]){
            l = m+1;
        }
        // Ryt -> left
        else{
            h = m-1;
        }
    }

    cout << arr[m] << endl;
    return;
}


int main()
{
    int arr[] = {1,2,3,4,8,7,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    peak(arr,n);
    peak2(arr,n);
 
    return 0;
}