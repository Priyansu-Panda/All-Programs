#include <iostream>
using namespace std;

int main() {
    int num = 5;

    cout << num << endl;

    // Address of operator -> &
    cout << &num << endl;

    int *ptr = &num;    
    // ptr contains the address of num

    cout << "Address of num is " << ptr << endl;
    cout << "Value of num is " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address of d is " << p2 << endl;
    cout << "Value of d is " << *p2 << endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of double is " << sizeof(d) << endl;
    cout << "Size of pointer (int *) is " << sizeof(ptr) << endl; 
    cout << "Size of value pointed by pointer (int) is " << sizeof(*ptr) << endl;
    cout << "Size of pointer (double *) is " << sizeof(p2) << endl;
    cout << "Size of value pointed by pointer (double) is " << sizeof(*p2) << endl;

    // Correctly declare pointer and avoid dereferencing null pointer
    int i = 5;

    int *p = nullptr;  // Initialize pointer to nullptr
    // cout << *p << endl; // This line is removed as it causes undefined behavior

    // Now assign the address of i to p
    p = &i;
    i++;
    (*p)++;
    cout << "Address stored in p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;

    int *q = &i;
    cout << "Address stored in q: " << q << endl;
    cout << "Value pointed to by q: " << *q << endl;
    (*q)++;
    int *r = p;
    cout << "Address stored in r: " << r << endl;
    cout << "Value pointed to by r: " << *r << endl;
    (*r)++;
//    int *s = *q;  // wrong 
    int *s = q;  // This should be assigning the address, not the value
    cout << "Address stored in s: " << s << endl;
    cout << "Value pointed to by s: " << *s << endl;

    return 0;
}


* -> Value at 
& -> address of 

arr &  &arr
