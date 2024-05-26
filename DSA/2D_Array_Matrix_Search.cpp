// O(log(no.ofelements)) ~ O(log(m*n)) 


#include<iostream>
using namespace std;

bool searchMatrix(int mat[][4], int target){

    int row = mat.size();
    int col = mat[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start)/2; // mid = [start+end]/2
    while (start <= end) {
        int element = matrix[mid / col][mid % col];
        if ( element == target) {
            return 1;
        }
        if (element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    // yahan tak aa agey ho toh kuch naa mila
    return 0;
}


int main()
{
 
 
    return 0;
}