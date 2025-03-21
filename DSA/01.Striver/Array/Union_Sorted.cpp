#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,1,1,2,2,3,4,5,5};
    int b[] = {2,2,2,3,4,4};

    int n = (sizeof(a)/sizeof(a[0]));
    int m = (sizeof(b)/sizeof(b[0]));

    int k = 0, i=0,j=0;
    int u[m+n];

    while(i<n && j <m){
        if(a[i] <= b[j] && a[i] !=a[i+1]){
            u[k] = a[i]; 
            i++,k++;
        } 
        if(a[i] >= b[j] && b[j] != b[j+1]){
            u[k] = b[j]; 
            j++,k++;
        } 
    }

    cout << "New Array" << endl;
    for(int i = 0; i<k; i++){
        cout << u[i] << " ";
    }

    return 0;
}