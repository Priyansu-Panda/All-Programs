#include<iostream>
using namespace std;
    int removeDuplicates(int arr[],int n){
        int j = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == arr[i+1]){

            }
            else{
                arr[j] = arr[i];
                j++;    // j = 7 
            }
////                OR
        //     if(arr[j] != arr[i]){
        //         arr[++j] = arr[i];
        //         // j++;
        //         // arr[j] = arr[i];
        //     }
        }
        return j;
        // return j+1;
}
int main()
{
    int arr[] = {1,1,1,1,2,2,2,3,3,4,5,5,5,6,7};
    int n = sizeof(arr)/sizeof(arr[1]);
    // cout << sizeof(arr[2]);

    int j =  removeDuplicates(arr, n);
    cout << "Total " << j << " unique elem" << endl;
    for(int i = 0; i<j ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}