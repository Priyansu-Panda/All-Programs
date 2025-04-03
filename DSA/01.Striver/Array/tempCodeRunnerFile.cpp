
#include<iostream>
using namespace std;

void spiarl(int mat[5][5], int m, int n){
    int k = 1;

    while(k <= (n)){

        // Right 
        for(int i = k; i<=n ; i++){
            cout << mat[k][i] << " ";
        }

        // Down
        for(int i = k+1; i<=n ; i++){
            cout << mat[i][n] << " ";
        }

        // Left
        for(int i = n-1; i>=k; i--){
            cout << mat[n][i] << " ";
        }

        // Up
        for(int i = n-1 ; i>k; i--){
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