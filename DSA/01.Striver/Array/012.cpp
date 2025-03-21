#include<iostream>
using namespace std;
 
int main()
{
 
 
    return 0;
}


























#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {0,0,1,1,1,0,0,2,2,1,0,2,1,1,,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int z =0;
    int o = 0;
    int t = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            z++;
        }
        else if(arr[i] == 1){
            o++;
        }
        else if(arr[i] == 2){
            t++;
        }

    }
    for(int i = 0; i<z; i++){
        arr[i] = 0;
    }
    
    for(int i = z+1; i<o+z; i++){
        arr[i] = 1;
    }
    
    for(int i = o+1; i<o+z+t; i++){
        arr[i] = 2;
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }


 
    return 0;
}













#include<iostream>
using namespace std;
 
int main()
{   
    int arr[] = {0,0,1,1,1,0,0,2,2,1,0,2,1,1,,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int low = 0; mid = 0; high = n-1;
    // for(int i = 0; i<n; i++){    // not reqd
    while(mid<=high){
        if(arr[i] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
 
    return 0;
}