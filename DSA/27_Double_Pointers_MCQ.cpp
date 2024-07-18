#include<iostream>
using namespace std;
 
int main()
{

    int arr[10];
    cout << arr   << " " << &arr << " " << arr[0] << " " << &arr[0];    // all are same 

    *arr -> value at 0th location 
    arr <-> addressof first location 
    *(arr +1 ) ->> arr == 0th loc, arr +1 == 1st loc *(1st loc) => value at first loc 
    *arr +1 = value at 0th loc + 1  

    arr[i] = *(arr + i)
    i[arr] = *(i+arr)

    

 /*
     0x7ffd467de880 0x7ffd467de880 0 0x7ffd467de880
    40
    4
    8
    0x7ffd467de880
    0
    0x7ffd467de880
    0
    0
    0x7ffd467de880
*/
    
    
    cout << sizeof (arr)<< endl;
    cout << sizeof(*arr)<< endl;
    cout << sizeof(&arr)<< endl;
    int *p = &arr[0];
    cout << p << endl;
        cout << *p << endl;
    
    p = arr;
    cout << p << endl;
        cout << *p << endl;
    
    *p = arr[1];
    cout << *p << endl;
    cout << p << endl;
    // *p = arr;
    // cout << *p << endl;
    // cout << p << endl;

    // arr <-> Mapped with adreess of 0th loc 
    arr = arr + 1 ; // ERROR
    p = p + 1; // OK


    // int first = 8; int second = 18 ;
    // int *ptr = & second;
    // *ptr = 9;
    // cout << first << " " << second << endl;


    // int first = 6;
    // int *p = &first ;
    // int *q = p ;    // p <-> &first ... so, q = &first
    // (*q)++;     // value pointed by q at the address present in q 
    // // cout << (*q)++<< endl;    // agar upar wala step nahi karte ho toh yahan due to post increament pehele value print hogi then on next step it will be incremeneted 
    // cout << first << endl;


//     int first = 8;
//     int *p = &first ;
//     cout << (*p)++<< " " ;   // post increament pehele value print hogi then increse hoga
//     cout << first << endl;


//     int *p = 0;
//     int first = 110;

//     // *p = first;    // ERROR  // SEGMENTATION FAULT
// /*
//     If you write `*p = first;`, you are attempting to dereference the pointer `p` and assign the value of `first` to the memory location it points to. However, there's a problem: `p` is currently pointing to `nullptr` (since it's initialized as `int *p = 0;`), which means it doesn't point to any valid memory location.

//     Dereferencing a pointer that is not pointing to a valid memory address results in undefined behavior, which can lead to crashes, unexpected program behavior, or memory corruption.

//     In short, `*p = first;` is wrong because `p` is not pointing to a valid memory address, and dereferencing it will result in undefined behavior. Before dereferencing `p`, you need to ensure that it points to a valid memory location.
// */

//     p = &first;

//     // p = first;       //WRONG  
// /*
//     pointer stores addres not integral values

//     In the line p = first;, you are trying to assign an integer (first) to a pointer to an integer (p). This is incorrect because the types are not compatible.

//     A pointer variable stores the memory address of another variable. When you do p = first;, you are trying to assign the value of first to p, but first is an integer, not a memory address. Therefore, you are essentially trying to assign an integer value to a pointer variable, which is not allowed in C++
// */

//     cout << "*p : "<< *p << endl;
//     cout << "p : " <<p << endl;


    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    
    // first = third;      // invalid 
/*
    attempting to assign the address stored in third to first, which is incorrect. first is an integer variable, and third is a pointer variable. They have incompatible types. This operation should generate a compilation error.
*/
    cout << "Before Third: " <<  third << endl;
    cout << "Before *Third: " << *third << endl; 
    third =  third + 2;     // 11 11
    *third = * third + 2;
    cout << "After Third: " <<  third << endl;
    cout << "After *Third: " << *third << endl; 
    cout << first << " " << second << endl;
/*
Before Third: 0x7ffc651283ac
Before *Third: 11
After Third: 0x7ffe651283b4
Segmentation fault 

11 11
*/



    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    
    // first = third;      // invalid 
/*
    attempting to assign the address stored in third to first, which is incorrect. first is an integer variable, and third is a pointer variable. They have incompatible types. This operation should generate a compilation error.
*/
    *third = * third + 2;
    cout << first << " " << second << endl;
// 11 13



    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
   // 21.5 21.5 21.5 


    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    // 20 8



    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;
    // 11 21

    // *arr -> value present at 0th location 
    // *(arr + 1) -> value present at (0+1)th location 
    // *(arr + i) <-> arr[i]


    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;
    // 0x7ffdfb6f5a10  0x7ffdfb6f5a10

    // arr == &arr == &arr[0] 



    // char ch[6] = {11, 12, 31};
    char ch[6] = "abcd";
    cout << ch << " " << &ch << " " << &ch[0] << " " << &ch[1] << endl;
    // abcd 0x7ffd6fbd7fda abcd bcd



    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;
    // 0x7ffdfb6f5a10 + 1 = 0x7ffdfb6f5a14
    
    // 0x7ffdfb6f5a14 -> 2nd location of array arr
    // *(arr + 1) -> value present at 2nd location of array arr
    // *(arr + 1) -> 21 
    // *(arr + 1) <-> arr[1] 



    int arr[6] = {11, 21, 31};
    int *p = arr;       // arr and p bot will be treated as pointers 
    cout << p[2] << endl;
    // 31
    // *(p + 2) <-> p[2] <-> arr[2] <-> *(arr + 2) <-> 31
    // p[2] <-> *(p + 2) <-> 31


    
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);
    // 11 14



    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;   // THIS IS WRONG --> 
    // arr = arr + 1;  --> ERROR
    cout << *ptr << endl;
    // 11



    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;
    // b



    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;
    // abcde



    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl; 
    // bcde



    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] < " "<<&str[1] << " " << &p[1] << endl;
    // b b abbar abbar



    void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;      // 20
    }



    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << " " << **q << " " << *p << endl; 



    int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;
    // 11 21


// IMP
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);   // **q = **q + 1 -> 100+1 = 101 <-> first <-> *p <-> **q

    // q -> add of p... *q -> {Value of p} -> add of first ... **q -> {value of first} -> 101  
    // **r = **q --> mean r ->[first ki value]

    // *r = *q --> mean r ->[p ki value] OR [&first]
    int *r = *q;    // r points to p // q-> {contains address of p} {q point to p} 
    
    // r -> &first .. *r -> 101 

    ++(*r);     // q points to p ... r points to *q  i.e  value of p  i.e  &first 
    cout << first << " " << second << endl; 
    // 102 101

    return 0;
}