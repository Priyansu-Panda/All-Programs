#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {2,2,2,3,3,4,4,4,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cnt = -1;
    for(int i = 0; i<n; i++){
        cnt = 0;
        for(int j =0; j<n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt > n/2){
            break;
        }
    }
 
    return 0;
}