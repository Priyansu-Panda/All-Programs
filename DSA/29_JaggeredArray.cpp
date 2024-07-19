#include<iostream>
using namespace std;
 
int main()
{
    int row, col;
    cout << "Enter Rows :";
    cin >> row ;
    // cout << "Enter Cols: ";
    // cin >> row;

    // Creating a 2D Array
    int **arr = new int*[row];  

    // int size[] = {4,3,5}
    int *size = new int[row];

    cout << "Enter no. of ele for Each row :";
    for(int i= 0; i<row; i++){
        cout << "Row " << i + 1 << ": ";
        cin >> col;
        size[i] = col;
        arr[i] = new int[size[i]];      // *(arr + i) = new int[size[i]]
        // Allocating the no. of Elements to each rows

    }
    
    // for(int i = 0; i<row; i++){
        
    //      arr[i] = new int[size[i]]; 
        
    // }

    

    // Taking input for the arrray
    for(int i =0; i< row; i++){
        for(int j = 0; j< size[i]; j++){
            cout << "Arr[ " << i <<"]"<<"[ " << j <<"]"<< ": ";
            cin >> arr[i][j];
        }
    }


    // printing the jagged array
    for(int i = 0; i < row; i++){
        for (int j = 0; j< size[i]; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the Every row
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }

    // free the arr created
    delete [] arr;

    delete [] size;






















/*
    int **arr = new int*[4];

    for(int i = 0; i<4; i++){
        arr[i] = new char[5];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            while(arr[i][j] != " " )
            {
                cin>> arr[i][j] >> endl;
            }
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            while(arr[i][j] != " "){
                cout << arr[i][j] << " ";
                break;
            }
        }
        cout << endl;
    }

    for(int i = 0; i<rows;i++){
        delete [] arr[i];
    }

    delete[] arr
*/
 
    return 0;
}