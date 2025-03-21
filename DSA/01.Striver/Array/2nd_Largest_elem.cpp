#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {3,5,1,29,26,2};

    int n = sizeof(arr)/sizeof(arr[1]);
    int l = arr[0];
    int l2 = -1;

    int s = arr[0];
    int s2 = arr[0];


    for(int i = 0; i < n; i++){
        if(l<arr[i]){
            l2 = l;      // 2nd largest will nvere be updated
            l = arr[i];      
        }
        else if (arr[i] < l && arr[i] > l2){
            l2 = arr[i];
        }

        if(s>arr[i]){
            s2 = s;
            s = arr[i];
        }
        else if(arr[i] > s && arr[i] < s2){
            s2 = arr[i];
        }

        // else if 
    }

    cout << "Largest : " << l << endl;
    cout << "2nd Largest : " << l2 << endl;
    cout << "Smallest : " << s << endl;
    cout << "2nd Smallest : " << s2 << endl;

    for(int i = 0; i<n; i++){
        if (arr[i] > l){
            l = arr[i];
        }
    }

    for(int i = 0; i<n; i++){
        // if (arr[i] > l2 &&  l2 != l){
        if (arr[i] > l2 &&  arr[i] != l){
            l2 = arr[i];
            cout << l2 << endl;
        }
    }

    cout << "Largest : " << l << endl;
    cout << "2nd Largest : " << l2 << endl;
 

    cout << "Smallest : " << s << endl;
    cout << "2nd Smallest : " << s2 << endl;
 
    return 0;
}