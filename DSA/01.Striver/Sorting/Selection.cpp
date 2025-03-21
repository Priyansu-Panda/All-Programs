#include<iostream>
using namespace std;

// SWAPS the min element with the first element

void selection_sort(int a[], int n){

     for(int i = 0; i <= n-2; i++){
        int mini = i;
        for(int j = i ; j <= n-1; j++ ){
            if(a[j] < a[mini]){
                mini = j ;
            }
        }
            //Once u got th emin then swap 
        int temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;

    }


}

int main(){
    int n = 6;
    int a[n] = {10,3,2,5,7,8};
    cout << "Before sort" << endl;
    for(int i = 0; i < n ; i++) cout << a[i] << " ";
    selection_sort(a, n);
    cout << "After sorting " << endl;
    for(int i = 0; i < n ; i++) cout << a[i] << " ";


   

    return 0;
}