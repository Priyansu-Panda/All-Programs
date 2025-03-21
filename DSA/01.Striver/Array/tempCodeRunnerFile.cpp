#include<iostream>
using namespace std;

void swap(int a1[], int a2[], int p,int q, int l, int h){
    int temp = a1[p];
    a1[p] = a2[q];
    a2[q] = a1[p];
}
 
int main()
{
    int a1[] = {1,3,5,7};
    int a2[] = {0,2,4,6,8,9};
    int m = sizeof(a1)/sizeof(a1[2]);
    int n = sizeof(a2)/sizeof(a2[2]);
    cout << n << " " << m << endl;

    int p = m-1, q = 0;

    while(p>=0 && q<m){
        if(a1[p] > a2[q]){
            swap(a1,a2,p,q,a1[p],a2[q]);
            // swap(a1[p--],a2[q++]);
            p--,q++;
        }
        else{
            break;      // because they are sorted ...so once stopped.. no neeed to proceed 
        }
    }

    for(int i = 0;i<m+n; i++){
        if(i<m)
            cout << a1[i] << " ";
        else 
            cout << a2[i-m] << " ";
    }



 
    return 0;
}




