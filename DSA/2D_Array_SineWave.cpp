// Jab bhi col index is ODD -> Bottom to Top {1 3 5 7 9}
// Jab bhi col index is EVEN -> Top tot BOttom {0 2 4 6 8 10 }


#include<iostream>
using namespace std;
 
int main()
{

    // Define array dimensions
    const int nRows = 3;
    const int mCols = 4;
    
    // Declare the 2D array with specified dimensions
    int arr[nRows][mCols];

    for(int col = 0; col < mCols; col++){   // traverse the columns
        // if(col&1){      //odd&1 = 1~ true
        if(col%2!=0){
            // odd Index -> bottom to top
            for(int row = nRows-1; row>=0; row--){
                cout << arr[row][col]<< " ";
            }
        }
        else    //even&1 = 0~false
        {
            // even Index -> top to bottom
            for(int row = 0; row <nRows; row++){
                cout << arr[row][col]<< " ";
            }
        }
    }

    
    return 0;
}