// %n ---> [0---(n-1)]
// arr[(i+k)%n] arr[i]---> cyclic wya meise k place mein shift kar dunga 

void rotate(int arr[],int n, int k){
    int temp[n];

    for(int i = 0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }
    // copy temp in array arr
    arr = temp;
}

//  for i = 3;
// temp[(3+2)%4]---> temp[5%4]---> temp[1] = arr[3]---> temp ra 1 index re arr ra 3rd index ra value rakha    ---> [_| (arr[3]) |_|_|_|]

#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[1]);
    rotate(arr,n,2);
 
    return 0;
}