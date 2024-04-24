// #include<iostream>
// using namespace std;

// int pivot(int arr[]){
//     int s = 0;
//     int e = arr.size()-1;

//     int mid = s+(e-s)/2;

//     while(s<e){

//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else if(arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         mid = s+(e-s)/2;

//     }
//         return s;       //when s is equal to e, indicating that the search space has narrowed down to a single element, which could be a potential peak. Since the loop breaks when s is equal to e, either s or e could potentially be the peak index.
// }
#include<iostream>
using namespace std;

int pivot(int arr[],int n){
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

int main(){

    int arr[5]={3,8,10,17,1};

    cout<< "Pivot is "<< pivot(arr,5) << endl;
}