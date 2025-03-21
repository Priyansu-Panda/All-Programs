#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1,2,3,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    n = n-1;
    int x, ind;


    int sum = -1;
    for(int i = 0; i<n-1; i++){
        sum += arr[i];
    }

    int s= (n*(n+1))/2;

    cout << s-sum << endl;


//          HASHING 
    int hash[n] = {0};
    for(int i =0 ; i<n-1; i++){
        hash[arr[i]] = 1;
    }
    for(int i = 1; i<n; i++){
        if(hash[i] == 0){
            cout << "Number is : " << i << endl;
            // break;
        }
    }


    int XOR1 = 0;
    int XOR2 = 0;
    
    // for(int i = 0; i<n; i++){
    //     XOR1 = XOR1^i;      // 2^2 = 0   2^0 =2
    // }
    
    for(int i = 0; i<n-1; i++){
        XOR2 = XOR2^arr[i];      // 2^2 = 0   2^0 =2

        XOR1 = XOR1^(i+1);
    }
    XOR1=XOR1^n;

    cout << "Number is : " << XOR1^XOR2 << endl;

    return 0;
}