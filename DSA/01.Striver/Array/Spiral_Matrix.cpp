// #include<iostream>
// using namespace std;
 
// int main()
// {
//     int m =5, n = 5;
//     int mat[m][n] = [[1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10]];

//     int left = 0;
//     int right = n;
//     int top = 0;
//     int bottom = m;
 
//     // l-r
//     for(int i =left; i<right; i++ ){
//         // cout << mat[left][i] << " ";
//         cout << mat[top][i] << " ";
//     }
//     // left++;
//     top++;
 
//     // t-b
    // for(int i = right; i<bottom; i++ ){
//     for(int i = top; i<bottom; i++ ){
//         cout << mat[i][right] << " ";
//     }
//     right--;
//     // right++;     // WRONG

//     // r-l;
//     // for(int i = right; i>top; i--){
//     for(int i = right; i>left; i--){
//         cout << mat[bottom][i] << " ";
//     }
//     bottom--;
 
//     // b-t
//     for(int i = bottom; i>top; i--){
//         // cout << mat[i][top] << " ";
//         cout << mat[i][left] << " ";
//     }
//     // top++;
//     left++;

//     return 0;
// }




#include<iostream>
using namespace std;

void spiral(int mat[5][5], int m, int n){
    int k = 0;

    while(k < (n)){

        // Right 
        for(int i = k; i<n ; i++){
            cout << mat[k][i] << " ";
        }

        // Down
        for(int i = k+1; i<n ; i++){
            cout << mat[i][n-1] << " ";
        }

        // Left
        for(int i = n-2; i>=k; i--){
            cout << mat[n-1][i] << " ";
        }

        // Up
        for(int i = n-2 ; i>k; i--){
            cout << mat[i][k] << " ";
        }

        k++; n--;
    }
    return;
}


int main(){
    // int n=5;
    // int arr[25] = {0};

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n; j++){
    //         cin>> arr[i][j];
    //     }
    // }
    int m =5, n = 5;
    // int mat[m][n] = [[1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10][1,2,3,4,5][6,7,8,9,10]]
    int mat[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    spiral(mat,m,n);

    return 0;
}