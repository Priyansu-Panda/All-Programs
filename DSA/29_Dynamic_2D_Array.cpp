#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    // cout << "SIZE OF ARR IN FUNC: " << arr.size() << endl;       // this size function is wront
    cout << "SIZE OF ARR IN FUNC: " << sizeof(arr) << endl;
    // for(int i = 0; i<arr.size(); i++)
    for(int i = 0; i<n; i++){
        sum+=arr[n];
    }
    return sum;
}


int main()
{
    // Heap Bas tumhe address return karega u cant name it---> new char  
    // and u can store that address in the pointer---> char *ch = new char  8+1 = 9 bytes 

    int n ;
    cout << "Enter N: " ;
    cin>> n;

    // int *arr = new int[n]; === int arr[n] 

    int* arr = new int[n];  // 8*n bytes
    // cout << "SIZE OF ARR IN FUNC: " << sizeof(arr) << endl;
    cout << "SIZE OF ARR before: " << sizeof(arr) << endl;

    for(int i = 0; i<n; i++){
        cout << " ENter arr[" << i<< "] : ";
        cin >> arr[n];      // arr[i] = *(arr+i)    arr is a pointer 
    }
    cout << "SIZE OF ARR After: " << sizeof(arr) << endl;   // same as before
    cout << "Sum is : "<< getSum(arr,n) << endl;


    delete []arr;


    // Dynamically creates an integer
    int *i = new int ;

    delete i; 


    // SIZE OF ARR IN FUNC: 8

    // SIZE OF ARR before: 8
    // SIZE OF ARR After: 8


//----------------------------------------------------------------------------------------------


// 2D ARRAYS

/*
[int *] -> [ , , , , ]
[int *] -> [ , , , , ]
[int *] -> [ , , , , ]
[int *] -> [ , , , , ]
[int *] -> [ , , , , ]

int** arr = new int*[5] 

    for(int i = 0 ; i< rows; i++){
        // for(int j = 0; j<cols; j++){
            arr2[i] = new arr[cols];       //new arr[j] is not a valid statement because arr is not a type.
        // }
    }
*/


    // int *arr = new int[3][3];

    int rows , cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;


    int *arr = new int [cols];  // arr is collection of int
/*
This allocates a single array of integers with size rows.
It is useful for a 1D array but not suitable for creating a 2D array.
*/

    // int **arr2 = new *arr[rows];    // WRONG


    // arr2 is a pointer to a pointer
    int **arr2 = new int*[rows];    // arr2 is collection of arr
/*
This allocates a single array of integers with size rows.
It is useful for a 1D array but not suitable for creating a 2D array.
*/


    // Getting thge @d MAtrix 
        // Allocate memory for each row
    for(int i = 0 ; i< rows; i++){
        // for(int j = 0; j<cols; j++){
            arr2[i] = new arr[cols];       //new arr[j] is not a valid statement because arr is not a type.
        // }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr2[i][j] = i * cols + j;   // Example value assignment
        }
    }

    cout << "Values stored in the 2D array:" << endl;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr2[i][j] << " " ;   // Example value assignment
        }
        cout << endl;
    }


    // Deallocate memory for each row
    for(int i = 0; i<rows; i++){
        delete[] arr2[i];
    }

    // Deallocate memory for the array of pointers
    delete[] arr2;



    return 0;
}