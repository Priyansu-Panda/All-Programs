#include<iostream>
using namespace std;

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

int main(){

    int even[6]= {2,4,6,8,10,12};
    int  odd[5]={1,3,5,7,9};

    int EvenIndex = binarySearch(even,6,12);
    cout<< "Index of 12 is : " <<EvenIndex<<endl;
    int OddIndex = binarySearch(odd,5,11);
    cout<< "Index of "<<11 <<" is : " <<OddIndex<<endl;
    // cout << "Element is present at index: "<<binarySearch(even,6,1);
    // cout << "\nElement is not present in array"<<endl;
    
    //cout << "Elementt is present at index: "<<binarySearch  (odd,5,7);  
}