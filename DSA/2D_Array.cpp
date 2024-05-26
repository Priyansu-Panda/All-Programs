#include<iostream>
using namespace std;
 
// int isPresent()
bool isPresent(int arr[][4], int elem){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4 ;j++){
            if (elem == arr[i][j])
                return 1;
        }
    }
    return 0;
}

void rowSum(int arr[][4]){

    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout <<endl << endl;
}


int largeRow(int arr[][4]){

    int rowIndex = -1
    // int maxi = MIN_INT;
    // int maxi = INT_MIN;
    int maxi = 0; 
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    
        if (maxi < sum ){
            maxi = sum ;
            rowIndex = row 
        }
    }  
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex ;
}

void colSum(int arr[][4]){
    for(int col = 0; col<3; col++){
        int sum = 0;
        for(int row = 0; row < 4; row++){
            sum += arr[col][row];
        }
        cout << sum << endl;
    }
}

int main()
{
    // create 2D Array
    // int arr[3][4];
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,0,11,4,56};
    
    // for(int i = 0; i<3; i++){
    //     for(int j =0; j<4; j++){
    //         cin>> arr[i][j];
    //     }
    // }
    for(int row = 0; row<3; row++){
        for(int col =0; col<4; col++){
            cout<< arr[row][col]<< " ";
        }
        cout << endl;
    }
    cout <<endl;
    for(int col = 0; col<4; col++){
        for(int row=0; row<3; row++){
            cout << arr[row][col]<< " ";
        }
        cout << endl;
    }
    cout <<endl;
    for(int row = 0; row<4; row++){
        for(int col=0; col<3; col++){
            cout << arr[col][row]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    int ele;
    cout << " Enter the Element to found "<< endl;
    cin >> ele;
    cout << isPresent(arr,ele) <<endl;
    if(isPresent(arr,ele)){
        cout << " Elemenet found "<<  endl;
    }
    // Printing result based on whether element is present or not
    cout << (isPresent(arr, ele) ? "Element found" : "Element not found") << endl; 

    rowSum(arr);
    colSum(arr);

    int n =  largeRow(arr);
    // cout << "MAx row is at index "<< largeRow(arr)<<endl;
    cout << "MAx row is at index "<< n <<endl;
    return 0;
}