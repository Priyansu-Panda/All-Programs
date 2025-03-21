#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {-2,-2,-2, -1,-1,0,0,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[2]);
    cout << n<< endl;
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(i > 0 && arr[i] == arr[i-1] ) continue;  // aur neeche mat jana,  i ++

        int j = i + 1;
        int k = n-1;

        while(j<k){
            sum = arr[i] + arr[j] + arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                //  
                j++;
                k--;
                while( j<k && arr[j] == arr[j-1]) j++;
                while(j < k && arr[k] == arr[k+1]) k--; 
            }
        }   
    }
 
 
    return 0;
}




































#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {-2,-2,-2, -1,-1,0,0,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[2]);
    cout << n<< endl;

    for(int i = 0; i<n; i++){
        // cout << "i: " << i << "  ";
        for(int j = i+1; j<n; j++){
            // cout << "j: " << j << "  ";
            for(int k = j+1; k<n; k++){
                // cout << "k: " << k << "  ";
                if(arr[i] + arr[j] + arr[k] == 0){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
 
    return 0;
}