// Print Starting wali Row 
// PRint Ending Column 
//  PRint Ending Row
// Print Starting Column


#include<iostream>
using namespace std;


int specialOrder(int matrix[][3], int rows, int cols) {
    int ans[] =  int[rows * cols];
    // void spiralOrder(vector<vector<int>>& matrix) {

        int rows = matrix.size(); // gives no. of rows
        int cols = matrix[0].size(); // gives no. of cols

        int startRow = 0;
        int startCol = 0;
        int endRow = rows-1;
        int endCol = cols-1;
        int count = 0;
        int total = rows*cols;
    while(count < total){

        // PRint Starting ROw
        // ---------->
        // for(int index = startingCol; index <=endingCol; index++ );
        // Print the starting row
        for (int index = startCol; index <= endCol && count < total; ++index) {
            ans[count++] = matrix[startRow][index];
        }
        ++startRow;



        // print edning Column 
    //     |
    //     |
    //     |
    //     |
    //    \ /
        // Print the ending column
        for (int index = startRow; index <= endRow && count < total; ++index) {
            ans[count++] = matrix[index][endCol];
        }
        --endCol;

    //PRint Ending Row
    // 
    // 
    //  <------- 
        // Print the ending row
        for (int index = endCol; index >= startCol && count < total; --index) {
            ans[count++] = matrix[endRow][index];
        }
        --endRow;

         // Print the starting column
        for (int index = endRow; index >= startRow && count < total; --index) {
            ans[count++] = matrix[index][startCol];
        }
        ++startCol;

        }
    return ans;
}
\end{code}

int main()
{
    int matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int resut[] = specialOrder(matrix, 3, 3);
        // Print the result
    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
    // void spiralOrder(vector<vector<int>>& matrix) {

        int rows = matrix.size(); // gives no. of rows
        int cols = matrix[0].size(); // gives no. of cols

        int startRow = 0;
        int startCol = 0;
        int endRow = rows-1;
        int endCol = cols-1;
        int count = 0;
        int total = rows*cols;
        while(count < total){ // not equal to because it starts from 0 to n-1 elements 
            // printing the first row
            for (int index = startCol; index <= endCol && count < total; ++index) {
                ans.push_back(matrix[startRow][index]);
                ++count;
            }
            ++startRow;

            // printing the last column
            for (int index = startRow; index <= endRow && count < total; ++index) {
                ans.push_back(matrix[index][endCol]);
                ++count;
            }
            --endCol;

            // printing the last row
            for (int index = endCol; index >= startCol && count < total; --index) {
                ans.push_back(matrix[endRow][index]);
                ++count;
            }
            --endRow;

            // printing the first column
            for (int index = endRow; index >= startRow && count < total; --index) {
                ans.push_back(matrix[index][startCol]);
                ++count;
            }
            ++startCol;
        }

        return ans;
    }
*/
