#include<iostream>
using namespace std;
 
void swap (int &s, int &e){
    int temp = s;
    s = e;
    e = temp;
}


int reverse(int arr[], int n){
    // int s = arr[0];
    // int e = arr[n-1];
    int s = 0;
    int e = (n-1); 
    // for(int i = 0; i < (n/2); i++){
    //     swap(arr[i],arr[n-i-1]);
    // }
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    // return arr;      //When you write return arr;, you're attempting to return the address of the first element of the array. However, this will not give you the entire array; it will just give you a pointer to the first element. If you want to pass the modified array back to the calling function, Modify the array in place: Since arrays are passed by reference to functions, any modifications made to them inside the function will be reflected outside the function as well. You don't need to return the array.
}

int reverse(int arr[], int n, int pos){
    // int s = arr[0];
    // int e = arr[n-1];
    int s = pos+1;
    int e = (n-1); 
    // for(int i = 0; i < (n/2); i++){
    //     swap(arr[i],arr[n-i-1]);
    // }
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void print(int arr[], int n){
    // for(int i = 0; i< arr.size();i++){
    for(int i = 0; i< n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the pos " << endl;
    int m;
    cin >> m ;

    cout<< "Printing array " << endl;
    print(arr,n);
    reverse(arr,n,m);

    cout<< "Printing Reverse array " << endl;
    print(arr,n);
    
    reverse(arr,n);
    cout<< "Printing Reverse array  " << endl;      // will give reveresed of poition wala arrray
    print(arr,n);
 
    return 0;
}