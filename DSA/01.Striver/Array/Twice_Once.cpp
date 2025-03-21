#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1,1,2,2,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n ; i+=2){
        if(i + 1 >= n || arr[i] != arr[i+1] ){
            cout << "index: " << i << "Value: " << arr[i] << endl;
            break;
        }
    }
    
    int xorr = 0;
    for(int i = 0; i<n; i++){
        xorr = xorr^arr[i];
    }
    cout << xorr << endl;

    return 0;
}