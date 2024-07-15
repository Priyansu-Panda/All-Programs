#include<iostream>
using namespace std;
 
int main()
{

float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;   //2.5 2.5 2.5 

int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  " << b << endl;    // 7 7 


int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;   //error
// attempts to dereference the pointer ptr to print the value it points to

// Which of the following gives the memory address of variable 'b' pointed by pointer 'a' i.e.
    // ANS -> a
int b = 10;
int *a = &b;

 char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;  // b

int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;   // 7 Garbage_value


// Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -

int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;   //412

/*Solution description
c stores address of a (and points to value of a). address that c stores is incremented by 3. since c is of type int, increment in bytes is 3 integer addresses, that is 3*4 = 12 bytes. therefore 400 + 12 = 412
*/


// Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, what will be the output -

double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;     // 208


// Assume integer takes 4 bytes and integer pointer 8 bytes.

int a[5];
int *c;
cout << sizeof(a) << “ “ << sizeof(c);      // 20 8


int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);      //1 2       // a -> refers to the address


// Assume that address of 0th index of array ‘a’ is : 200. What is the output -

int a[3] = {1, 2, 3};
cout << *(a + 2);   //3



    int arr[] = {4, 5, 6, 7};
    int *p = (arr + 1);
    cout << *arr + 9;       // 4 + 9 = 13.
// *arr dereferences the pointer to the first element of the array arr, which is 4 (i.e., arr[0]).
// *arr + 9 is 4 + 9 = 13.


// Assume address of 0th index of array ‘b’ is 200. What is the output -

char b[] = "xyz";
char *c = &b[0];
cout << c << endl;

/*When you use cout to print a char* (character pointer), it prints the entire string starting from the address pointed to by the pointer until it encounters a null terminator (\0).
*/

/*
Solution description
c stores the address of start of array b (and not of it’s values). So the entire array is printed when c is printed.
*/


char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];    // h h


  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;      // ABCDEFGHIJ

  /*
  Solution description
*(arr + i) is equivalent to arr[i]. Since arr is an character array, so 65 + i will be typecasted to corresponding character for each i from 0 to 9. Since at last , we are appending the NULL character, so arr will become string and thus we get the output as "ABCDEFGHIJ".
*/

 char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;  //fg

  /*
  Solution description
Initially ptr will point to 'a'. But as soon as we write ptr+=5, ptr will shift 5 addresses ahead that is it will point to 'f' and thus when we are printing ptr, it will print all the characters starting from 'f' till it encounter NULL character, so output is "fg".
*/


void changeSign(int *p){
  *p = (*p)  *  -1;
}


  int a = 10;
  changeSign(&a);
  cout << a << endl;    // -10



void changeSign(int *p){
  *p = (*p)  *  -1;
}

  int a = 10;
  changeSign(&a);
  cout << a << endl;    // 2 1 



void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

 int a = 10;
 square(&a);
 cout << a << endl;     // 10


// GOOD
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;  // 10 21





/*
#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}
        //  14 7 6


Solution description
1. In the main function, x is initialized with the value 5.
2. The function P is called with the address of x (&x).
3. Inside P, *y will give the value as 5 and thus local variable x of function P is updated with 7.
4. The function Q is called with the value 7, which doubles it and prints 14.
5. Back in P, x is updated to 7 - 1 = 6, and 7 is printed.
6. Finally, in the main function, the updated value of x (6) is printed.


*/
 

/*
When you declare an array int a[] = {1, 2, 3, 4};,
 a is a constant pointer to the first element of the array. This means a always points to the address of the first element, and you cannot change this pointer.
Doing a++ tries to increment this pointer, which is not allowed because a is not a modifiable lvalue.
*/
 int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;     // ERROR

/*          CORRECT
   int a[] = {1, 2, 3, 4};
    int *p = a; // Initialize p to point to the first element of a
    p++;        // Now you can increment p
    cout << *p << endl; // This will print 2, the second element in the array
*/


 char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }

/*  EXPLANATION 
st[i]:

This directly accesses the i-th character in the array st.
Example: When i is 1, st[1] is 'B'.
*(st) + i:

----IMP------->>>>>*(st) dereferences the pointer st, giving the first character of the array, which is 'A'.
Adding i to this character results in an integer addition with the ASCII value of 'A'.
Example: When i is 1, *(st) is 'A', and 'A' has an ASCII value of 65. So, *(st) + 1 results in 65 + 1 = 66, which is the ASCII value for 'B'.
Thus, it prints the integer value 66.
*(i+st):

Pointer arithmetic: i + st gives the address of the i-th character in the array st.
Dereferencing this address gives the character at the i-th position.
Example: When i is 1, *(1 + st) is *(st + 1), which is 'B'.
i[st]:

This is equivalent to st[i] due to the commutative property of array subscripting in C++.
Example: When i is 1, 1[st] is st[1], which is 'B'.
Example Iteration (i = 1):
For i = 1, the loop will print the following:

st[i]: 'B' (the character at index 1)
*(st) + i: 66 (ASCII value of 'A' + 1)
*(i+st): 'B' (the character at index 1)
i[st]: 'B' (the character at index 1)
*/





    int numbers[5];
    int *p;

    // Point p to the start of the array
    p = numbers;
    *p = 10;         // numbers[0] = 10

    // Point p to the third element of the array
    p = &numbers[2];
    *p = 20;         // numbers[2] = 20

    // Decrement the pointer to point to the second element
    p--;        // p--; *p = 30;  Decrement p to point to numbers[1]:
    *p = 30;         // numbers[1] = 30

    // Point p to the fourth element of the array
    p = numbers + 3;    // p = numbers + 3; *p = 40; Set p to point to numbers[3]:
    *p = 40;         // numbers[3] = 40

    // Point p to the start of the array again
    p = numbers;    // p = numbers; *(p + 4) = 50; Set p to point to numbers[0], then *(p + 4) sets numbers[4] to 50:
    *(p + 4) = 50;   // numbers[4] = 50

    // Print the array
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << ",";      // 10,30,20,40,50,
    }



    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";         // 90.5
  cout<< ptr2 - ptr1;       // 3

  /*        EXPALNATION OF 3 
  cout << ptr2 - ptr1;  // ptr2 - ptr1 gives the number of elements between ptr1 and ptr2

ptr2 points to arr[3].
ptr1 points to arr[0].

The difference ptr2 - ptr1 is calculated as:
        index of ptr2−index of ptr1=3−0=3
  */


/*
When you add an integer to a pointer (ptr1 + 3), it moves the pointer by that many elements in the array.
When you subtract two pointers (ptr2 - ptr1), it gives the number of elements between the two pointers, not the byte difference.
*/


void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;       // 11
}




  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;       // 10 10 10


int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {    
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);     // 7 + 7 + 5 = 19
    return 0;
}




void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}           // ninjasquiz codingninjas codingninjas ninjasquiz

// Note: On executing this code, a warning will appear: "ISO C++ forbids converting a string constant into 'char*'. " Ignore the warning and then print the expected output.


   int i = 5;
    int *p = &i;

    int a = *p;
    a++;
  cout << a << endl;

// COPYING A POINTER 
  int num = 5
    int *p = &num;
    int *q = p;
    cout  << p << "---" << q << endl;
    cout  << *p << "---" << *q << endl;






    return 0;
}