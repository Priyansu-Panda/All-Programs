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

















#include<iostream>
using namespace std;
 
int main()
{
    int a1[] = {1,3,5,7};
    int a2[] = {0,2,6,8,9};
    int a3[10] = {0};
    int m =0,n=0;
    for(int i = 0; i<9; i++){
        if(a1[m]<a2[n]){
            a3[i] = a1[m];
            m++;
        }
        else{
            a3[i] = a2[n];
            n++;
        }
    }
    // sorted array creted 
    // for(int i = 0,j = 0; i<4,j<5; j++,i++){      // WRONG


    // for(int i = 0, j = 0; i < 4 && j < 5; j++, i++) {
    //     a1[i] = a3[i];
    //     a2[j] = a3[4+j];
    // }
//          OR

    cout << "a3 : " << endl;
    for(int i = 0; i<9; i++){
        cout << a3[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<9; i++){
        if(i<4){
            a1[i] = a3[i];
        }
        else{
            a2[i-4] = a3[i];    // 6-4 = 2 ... 2nd index of j 
        }
    }
    cout << a1 << " " << a2 << endl;
    for(int i = 0; i<4;i++){
        cout << a1[i] << " " ;
    }
    cout << endl;
    for(int i = 0; i<5;i++){
        cout << a2[i] << " " ;
    }
    return 0;
}