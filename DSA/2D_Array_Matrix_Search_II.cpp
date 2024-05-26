// Input: matrix = [
 //                [1,4,7,11,15],
//                 [2,5,8,12,19],
//                 [3,6,9,16,22],
//                 [10,13,14,17,24],
//                 [18,21,23,26,30]
//              ], 
//                target = 5

/*
lets consider the top-right corner element-> 15
like 15 its greater than the target element so 15 wale column mein sare elements target se bade honge ... no need to search there peche aa ajao
if 15 mere target wale element se chota hai the uss row meinn sare elements target se chotey honge then uss rowmein kuch nahi karna hai neeche aa ajao 
*/

#include<iostream>
using namespace std;

 bool searchMatrix( int matrix[3][4], int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int rowIndex = 0;
        int colIndex = cols-1; // since we start from 0 to n-1

        while(rowIndex < rows && colIndex >= 0){
            int element = matrix[rowIndex][colIndex]; 
            if(element == target ){
                return true ;
            }
            if (element < target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return false;   // yahan tak pahaunch agey hp toh nahi mila hoga
    }

int main()
{
 
 
    return 0;
}