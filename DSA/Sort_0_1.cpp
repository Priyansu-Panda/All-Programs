#include<iostream>
using namespace std;


void sortOne (int arr[],int n){
    int countZero =0;
    int countOne=0;
    // this is a modified version of the above function which counts the number of zeroes and ones in an array.         

    for(int i =0; i<n; i++){
        if (arr[i] == 0){
            countZero++;
        }
        else if (arr[i]== 1){
            countOne++;
        }
    }
    //// FOR EACH LOOP
    
    // for(int num: arr){
    //     if (num== 0){
    //        countZero++;
    //     }
    // }
    // for(int num : arr){
    //      if (num== 1){
    //         countOne++;
    //     }
    // }

    for (int i = 0;i<countZero; i++){
        arr[i] = 0;
    }

    for (int i = countZero; i< countOne+countZero; i++){
        arr[i]=1;
    }
}
// }

void printArray(int arr[], int size){

    for (int i =0; i<size ; i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
}

int main(){

    int arr[8]= {1,1,0,0,0,0,1,0};
    sortOne(arr, 8);
    printArray(arr,8);
    

    return 0;
}


/*

#include<iostream>
using namespace std;

void sortOne(int arr[], int n) {
    int countZero = 0;
    int countOne = 0;

    // Count the number of 0s and 1s
    for(int num : arr) {
        if (num == 0) {
            countZero++;
        } else if (num == 1) {
            countOne++;
        }
    }

    // Update the array with sorted 0s and 1s
    for (int i = 0; i < countZero; i++) {
        arr[i] = 0;
    }
    for (int i = countZero; i < countOne + countZero; i++) {
        arr[i] = 1;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8]= {1,1,0,0,0,0,1,0};
    sortOne(arr, 8);
    printArray(arr,8);
    return 0;
}

*/
