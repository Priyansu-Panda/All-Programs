#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int l, int m, int u){
    int i = l, j = m + 1, k = 0;
    int n = u - l + 1;  // Size of the temporary array
    // int b[(m-l)+(u-m)];
    int* b = (int*)malloc(n * sizeof(int));  // Dynamic allocation of the temporary array


    while(i <= m && j <= u){
        if(arr[i] <= arr[j]){
            b[k] = arr[i];
            k++,i++;
        }
        else{
            b[k] = arr[j];
            k++, j++;
        }
        k++;
    }
    // agar kuch bach jata hai 
    if (i> m){
        while(j<=u){
            b[k] = arr[j];
            j++, k++;
        }
    }
    else if(j>u){
        while(i<=m){
            b[k] = arr[i];
            k++, i++;
        }
    }

   // Copy the sorted elements back to the original array
    for (i = 0; i < n; i++) {
        arr[l + i] = b[i];
    }
    free(b);  // Free the dynamically allocated memory
}


void mergeSort(int arr[], int l, int u){

    if(l<u){    // i.e the array atleast conatins ttow elements .... 
    // we have to iterate it till its atomic size
    int m = (l+u)/2; // middle index

    mergeSort(arr,l,m);
    mergeSort(arr,m+1,u);
    merge(arr,l,m,u);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    
    return 0;
}