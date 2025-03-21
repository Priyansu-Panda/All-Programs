






























#include<iostream>
using namespace std;
 
int main()
{

    int n = 8;
    int mat[n][n] = {0}; 

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if(j == i || j == 1){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
            }
        }
    }
    
    int l = n;

    for(int i = 1; i<n; i++){
       
        int k = 0;

        for(int j = 1; j<n ; j++){
        
            while( k != l){
                cout << " " ;
                k++;
            }
        
            if(mat[i][j] == 0){
                continue;
            }
            else{
                cout << mat[i][j] << " ";
            }
        
        }
        cout << endl;
        
        l--;
    }

    return 0;
}