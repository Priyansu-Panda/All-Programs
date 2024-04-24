#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;

    int mid = s+ (e-s)/2;

    while(s<e){

        if (arr[mid]>=arr[0])
        {
            s = mid+1;       // s!= mid because  mid kabhi first element nhai hoga 
        }
        else
        {
            e = mid;       //e!= mid-1 becz the very first elsement in the bottom line of the graph cn be mid
        }
        mid = s+ (e-s)/2;
    }
    return s;  //OR return e       //when s is equal to e, indicating that the search space has narrowed down to a single element, which could be a potential peak. Since the loop breaks when s is equal to e, either s or e could potentially be the peak index.
}

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]== key){
            return mid;
        }   
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        // mid = (start+end)/2;
        int mid = start+(end-start)/2;
    }
    return -1;
}
int findPivot(int arr[],int n,int k ){

    int pivot = getPivot(arr,n);
    if(k>= arr[pivot] && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n,k);
    }
    else{
        return binarySearch(arr,0,pivot,k);
    }

}

int main(){

    int arr[5]={3,8,10,17,1};

    cout<< "Pivot is "<< getPivot(arr,5) << endl;
}