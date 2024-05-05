#include<iostream>
using namespace std;
 
 void print(int arr[], int size){
    cout << "MErgeed Array " << endl;
    for (int i = 0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
// void mergeArr(int arr1[],int n, int arr2[],int m, int arr3[]){   //FOR NON-SORTED

//     for(int i = 0; i<n;i++){
//         arr3[i] = arr1[i];
//     }
//     for(int i = 0; i<m;i++){
//         arr3[n+i] = arr2[i];
//     }
// }

void mergeArr(int arr1[],int n, int arr2[],int m, int arr3[]){

  int i = 0, j = 0;
    int k = 0;

    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr3[k]= arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]= arr2[j];
            k++;
            i++;
        }
        // arr[k++] = arr2[j++];
    }
    // copy kardo first array ke remaining elem ko
    while(i<n){
        arr3[k++] = arr1[i++];
        
        // arr3[k] = arr1[i];
        // k++, i++;
    }
    // copy kardo 2nd array ke remaining elem ko
    while(j<m){
        arr3[k++] = arr1[j++];
        // k++, j++;
    }

}

// void mergeArr(int arr1[],int n, int arr2[],int m, int arr3[]){       //FOR NON-SORTED
//     int i,j;
//     for (i = 0; i <=(n); i++ ){
//         arr3[i]= arr1[i]; 
//     }
//     for(j=0; j<m,i<(n+m);j++,i++){
//         arr3[i]= arr2[j];
//     }
//     // print (arr3,(n+m) );
// }

// 'print' was not declared in this scope

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n+m] ={0};
    mergeArr(arr1, n, arr2, m,arr3);
    print(arr3,n+m);

    return 0;
}

  