#include<iostream>
using namespace std;

void subsets(int arr[], int n){
    // cout<< "Subset: " << 
    int k = 0;
    while(k<n){
        for(int i = 0; i<n; i++){
            // i = k;
            for(int j = k ; j <=i; j++ )
                cout << arr[j] << " ";
            cout << endl;
        }
        k++;
    }
}


void subsets1(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j =i ; j<n; j++){
            for(int k = i; k<=j; k++){
                cout << arr[k] << " ";
            }
        cout << endl;
        }
    }
}


void subsetsSum(int arr[], int n){
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j =i ; j<n; j++){
            for(int k = i; k<=j; k++){
                sum += arr[k];
                cout << arr[k] << " ";
            }
            cout << "  :: SUM = " << sum;
            cout << endl;
            sum = 0;
        }
    }
}

int main()
{
    int arr[] = {-2,-4,6,2,3,4,5,-1,-2};
    int n = sizeof(arr)/sizeof(arr[0]);

    subsets(arr,n);
    cout << endl << endl;
    subsets1(arr,n);
    cout << endl << endl;
    subsetsSum(arr,n);
 
    return 0;
}