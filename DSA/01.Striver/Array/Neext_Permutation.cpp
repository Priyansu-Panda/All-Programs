#include<iostream>
using namespace std;
 
int main()
{
    int ind = -1;
    int arr[] = {2,1,5,4,3,0,0};
    for(int i = n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){  // if there is no brak index it is the last eleme... then reverse the array
        rev(arr)
    }
    for(int i = ind ; i<n; i++){
        if(arr[i]<arr[ind]){
            swap(arr[i-1], arr[ind]);
            break;
        }
    }

    rev(arr)
 
    return 0;
}





#include<iostream>
using namespace std;
 
int main()
{
    //              |
    int arr[] = {2,1,5,4,3,0,0};
    int n = ;
    int ind = -1

    // First neeed to find the critical point where arr[i] < arr[i+1]
    for(int i = n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }

    // 2ndly need to find the next highest no.
    for(int i = ; i>=0; i--){
        if(arr[ind] < arr[i]){
            swap(arr[ind], arr[i]);
            break;
        }
    }

    // 3rdly reverse the remaining so as to make the minimum for the next array  eleemnts
    reverse(arr,i+1);


 
    return 0;
}