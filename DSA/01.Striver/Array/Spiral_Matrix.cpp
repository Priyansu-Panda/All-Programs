#include<iostream>
using namespace std;
 
int main()
{
    int m =5, n = 5;
    int mat[m][n] = [[1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10]];

    int left = 0;
    int right = n;
    int top = 0;
    int bottom = m;
 
    // l-r
    for(int i =left; i<right; i++ ){
        // cout << mat[left][i] << " ";
        cout << mat[top][i] << " ";
    }
    // left++;
    top++;
 
    // t-b
    // for(int i = right; i<bottom; i++ ){
    for(int i = top; i<bottom; i++ ){
        cout << mat[i][right] << " ";
    }
    right--;
    // right++;     // WRONG

    // r-l;
    // for(int i = right; i>top; i--){
    for(int i = right; i>left; i--){
        cout << mat[bottom][i] << " ";
    }
    bottom--;
 
    // b-t
    for(int i = bottom; i>top; i--){
        // cout << mat[i][top] << " ";
        cout << mat[i][left] << " ";
    }
    // top++;
    left++;





    return 0;
}