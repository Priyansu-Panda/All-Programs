#include <stdio.h>
#include <stdlib.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int u ){

    int piv = arr[l];  // mot arr[0]  Using arr[l] ensures the pivot element is correctly chosen from the current subarray being partitioned  // Use the first element as pivot
    int s = l
    int e = u;
    while(s<e){
        while(arr[s] <= piv  && s < u){  // Ensure s does not go out of bounds // if elements are less than or equal to pivot element the s++/ aage chalo 
            s++;
        }
        while(arr[e] > piv){    // if elements are greater than pivot element then e--/ peche chalo 
            e--;
        }
        if(s<e){        // neither arr[l] <= piv nor arr[e] > piv  
         // s ko bada mila and e ko chota mila ...then dono ko swap karo
            swap(&arr[s], &arr[e])
        }       
    }
    swap(&arr[l], &arr[e]); // Swap pivot with the element at index e  // swapping with pivot element which was there at begining to the middle
    return e;   // u will get the pivot element
}

int quickSort(int arr[],int l, int u){
    if(l<u){
        int p = partition(arr, l, u);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,u);
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
        // \end{code}
    }
}

int main()
{
    int arr[7] = {7,9,5,46,1,2,3};

    printf("Given array is \n");
    printArr(arr,7);

    printf("After Sorting: \n");
    quickSort(arr,0,7-1);
    printArr(arr,7);
  
    return 0;
}