#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){

    int s=0, e= n-1;
    int mid = s+(e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==key)
        {
            ans = mid;
            e= mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }

        mid = s+ (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){

    int s=0, e= n-1;
    int mid = s+(e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==key)
        {
            ans = mid;
            s= mid+1;
        }
        else if(key>arr[mid])   //RIGHT MEin aa jao
        {
            s=mid+1;
        }
        else if (key<arr[mid])  //Left Meiin AA Jao
        {
            e=mid-1;
        }

        mid = s+ (e-s)/2;
    }
    return ans;
}

int main(){

    int even[5]= {2,3,3,3,10}; // array of 5 elements with values 2,4,6,

    cout<< " First Occurence of 3 is  at index :" <<firstOcc(even,5,3);// calling the function and printing the result.
    cout<< "\n Last Occurence of 3 is  at index :" <<lastOcc(even,5,3);// calling the function and printing the result.
    
    int totalOcc = ( lastOcc(even,5,3)-firstOcc(even,5,3)) +1;
    cout<< " Total No of occ of 3 is "<<totalOcc << endl;

    return 0;
}


// MAX MIN FIND BY LINEAR SEARCH