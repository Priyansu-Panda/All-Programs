#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {-2,-2,-2, -1,-1,0,0,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[2]);
    cout << n<< endl;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int hash[9] = {0};
            for(int k = j+1; k<n; k++){
                hash[k] = 0-(arr[i] + arr[j] + arr[k]);
            }
        }
    }
 
    return 0;
}