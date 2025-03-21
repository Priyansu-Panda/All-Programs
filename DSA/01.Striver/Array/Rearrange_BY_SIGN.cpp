

#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1,2,-3,-2,-5,4,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0, q=0;
    int p[n/2] = {0};
    int n1[n/2] = {0};

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            p[k++] = arr[i];
        }
        if(arr[i]<0){
            n1[q++] = arr[i];
        }
    }
    int l1 = sizeof(p)/sizeof(p[0]);
    int l2 = sizeof(n1)/sizeof(n1[0]);
    int l = 0;
    if (l1>l2){
        l = l1;
    }
    else{
        l = l2;
    }

    // pehele jo chota hai uske hisab se brute force wale method se array ko arrange karo
    for(int i =0; i<l2; i++){
        arr[2*i] = p[k];
        arr[2*i+1] = n1[k]; 
        k++;
    }

    // Ab baki jitne bache useey pichu add kardo

    // for(int i = 2*l2; i<n; i++){
    int ind = 2*k;
    for(int i = k; i<l; i++){
        if(l1>l2){
            arr[ind++] = p[i];
        }
        else{
            arr[ind++] = n1[i];
        }
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
 
    return 0;
}

























#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1,2,-3,-2,-5,4};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int p = 0,q = 1;
    int ans[n1];

    for(int i = 0; i<n1; i++){
        if(arr[i] >0){
            ans[p] = arr[i];
            p+=2;
        }
        if(arr[i]<0){
            ans[q] = arr[i];
            q+=2;
        }
    }
    // cout << q << " "<< p << end;
    
    for(int i = 0; i<n1; i++){
        cout << ans[i] << " ";
    }
 
    return 0;
}
































#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1,2,-3,-2,-5,4};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int p[3] = {0};
    int n[3] = {0};
    int k =0, q=0;
    for(int i = 0; i<n1; i++){
        //  storing elems into diff aray
        if(arr[i] > 0){
            p[k++] = arr[i]; 
        }
        if(arr[i] < 0){
            n[q++] = arr[i]; 
        }
    }

    for(int i = 0; i<n1/2; i++){
        arr[2*i] = p[i];
        arr[2*i+1] = n[i];
    }

    for(int i = 0; i<n1; i++){
        cout << arr[i] << " ";
    }
 
    return 0;
}