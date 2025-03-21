#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t =  14;

    int low = 0, high = n-1;
    sort(arr,n){
        while(low<high){
            if(arr[low]+arr[high]==t){
                cout<<"Pair found"<<endl;
            }
            else if(arr[low]+arr[high]<t){
                low++;
            }
            else{
                high--;
            }
        }

    }
 
    return 0;
}





























#include<iostream>
using namespace std;
 
int main()
{   
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t =  14;

    // int h[] = {0};       // WRONG ... HAVE TO MENTION THE SIZEOF ARRAY
    int h[12] = {0};

    for(int i = 0; i<n; i++){
        // h[i+1] = h[i] + arr[i];
        h[arr[i]] = 1;
    }    
    int s = 0;
    for(int i = 0; i<n; i++){
        s= t-arr[i];
        if(h[s] == 1){
            cout << "Element is present in array " << i << endl;
        }
    }
 
 
    return 0;
}




































#include<iostream>
using namespace std;
 
int main()
{

    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t =  14;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            // for(int j = 0; j<n; j++){
            //     if(i==j){
            //         continue;
            //     }
            //     if(arr[i] + arr[j] == t){
            //         cout "yesy";
            //         break;
            //     }
            // }
            if(arr[i] + arr[j] == t){
                cout << "YES";
                break;
            }
        }
    }
 
    return 0;
}