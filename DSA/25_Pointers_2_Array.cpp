//  a variable that stores the address of another variable is called a pointer.


// array name "arr" represents the array's first location's address
// & operator -> address of

//  Pointers are another type of variable in CPP, and these variables store addresses of other variables.

// when adding one to a pointer, the pointer is made to point to the following element of the same type, and, therefore, the size in bytes of the type it points to is added to the pointer.


#include<iostream>
using namespace std;
 
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    // address of arr = address of arr[0]

    // ALL ARE EQUAL
    cout << " address of first memory block: " << arr << endl;  //arr -> 0th location ka address 
    cout << " address of first memory block: " << &arr << endl;
    cout << " address of first memory block: " << &arr[0] << endl;


    //*arr -> ek value dereference kare wale hai ... kounsi value --> jiski address arr ke andar stored hai

    // arr -> add1 ...... add1 -> {values}
    cout << "4TH: " << *arr << endl;    // value at 1st location
    cout << "5TH: " << *arr + 1 << endl;
    cout << "6TH: " << *(arr + 1) << endl;  // arr -> 1st lcation ... arr + 1 -> 2nd location   
    cout << "7TH: " << *(arr) + 1 << endl;  


    int *p = &arr[0];

    cout << "8TH *p: " << *p << endl;   // Value 
    cout << "TH &p: " << &p << endl;   // address of p 
    cout << "TH *(&p): " << *(&p) << endl;   // deference the value stores in the addres  of p i.e ewill show the value -> address of arr  
    cout << "TH **(&p): " << **(&p) << endl;   // deference the value stores in the addres  of p i.e ewill show the value -> 1st value of arr  
    cout << "9TH p: " << p << endl;     // address 
    cout << "10TH p++: " << p++ << endl;    // next address but next time hoga 
    cout << "11TH p: " << p << endl;     // address 
    cout << "12TH (++p): " << ++p << endl;  //next address

    //// arr[i] = *(arr + i);   OR
    ////  i[arr] = *(i + arr)
    int i = 3; 
    cout << " arr[i] = i[arr] =  " << i[arr] << endl;  // 40
    

    // arr[2] <-> *(arr + 2)
    cout << "13TH arr[2]: " << arr[2] << endl;   // Value
    cout << "14TH  *(arr + 2): " << *(arr + 2) << endl;   // Value

    cout << "15TH  *(&arr[2]) : " << *(&arr[2]) << endl;   // Value
    cout << "16TH  *(&arr[3]) : " << *(&arr[3]) << endl;   // Value

    cout << "17TH  *(&arr) : " << *(&arr) << endl;   // add of arr
    cout << "18TH  *(arr) : " << *(arr) << endl;   // th loc value 

    // cout << "18TH  *(arr[3]) : " << *(arr[3]) << endl;   // WRONG

    // int arr[10]   -> a block of 40 bytes will be allocated to the memory where, arr will be pointing to the first element

    int temp[10];
    cout << "19TH  sizeof(arr): " << sizeof(arr) << endl;   // 20
    cout << "20TH  sizeof(temp): " << sizeof(temp) << endl;   // 40
    int *ptr = &temp[0];
    cout << "21st  sizeof(ptr): " << sizeof(ptr) << endl;   // address size
    cout << "22nd  sizeof(*ptr): " << sizeof(*ptr) << endl; // value present at address
    cout << "23rd  sizeof(&ptr): " << sizeof(&ptr) << endl; 

    // int *p = &arr[0];    //address of arr[0] -> 710  // address of p is 810 // p has value -> [710] .... *p {print karun toh} -> 710 pe jo value padi hai ussey print karo
    // *p ---> 710 pe jo value padi hai ussey print karo

    // temp -> matlab ADDRESS ... *temp -> matlab uss adress mein jo value hai 
    cout << "24th sizeof(temp)" << sizeof(temp) << endl;
    cout << "25th sizeof(*temp): " << sizeof(*temp) << endl;
    cout << "26th sizeof(&temp): " << sizeof(&temp) << endl ;

    // SIZE -> arr -> no. of blocks x 4
    // SIZE -> pointer -> p-> stores the address -> usually 8 bytes
    // SIZE -> value -> 4 bytes

    // int arr[10]

    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;    //print address
    
    int ch[5] = "abcd";
    cout << ch << endl;     // print entire content


    char ch[6] = "abcde";   //safeplay  
    char *c = "abcdf";  //very risky

    char *c = &ch[0];
    cout << c << endl;  // wont print the address but will print the content in the address 

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;


    return 0;
}