#include<iostream>
using namespace std;
 
void print(int *p){
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;
    cout << "Value of &p: " << &p << endl;
}

void update(int *p){
    p = p+1;    // No change outside function 
    cout << "Inside Function p: " << p << endl;     // there will be change 


    *p = *p + 1;
    cout << "Inside Function *p: " << *p << endl;
}

// int getSum(int arr[], int n){
    // OR       // arr[i] = *(arr + i)
int getSum(int *arr, int n){     // Both are same --- it doesnt creates an arra but rather creates a function 
    cout << endl << "Size of arr in function : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum += arr[i];
        // sum += i[arr];       // arr[i] = *(arr + i);
    }
    return sum;
}

int main()
{
 
    int value = 5;
    int *p = &value;

    cout << "&P is: " << &p << endl;
    cout << "P is: " << p << endl;
    cout << "P + 1 is: " << p+1 << endl;
    cout << "*P is: " << *p << endl;
    cout << "*P +1 is: " << *p+1 << endl;

    print(p);
    cout << " BEfore p MAIN: " << p << endl;
    update(p);
    cout << "After p MAIN: " << p <<endl;     // No change 

    print(p);
    cout << " BEfore *p: " << *p << endl;
    update(p);
    cout << "After *p: " << *p <<endl;

    int arr[5] = {1,2,3,4,5};
    cout << "Size of Arr in MAin: " << sizeof(arr) <<endl;
    cout << "Sum is " << getSum(arr, 5) << endl;
    cout << "Sum is " << getSum(arr+3, 3) << endl;     // will pass rest part of array // arr[i] = *(arr + i)


    return 0;
}