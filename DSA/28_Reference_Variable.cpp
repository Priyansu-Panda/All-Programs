// Memory already allocated hui hai eg : int n = 10 ; 
// ab bas 10 ko ek naya naam dena hai without creating a new memory int& j = n
// j is a reference variable and n is a normal variable


/*
Pass By VAlue 
a(n) ----> b(n)   n in a != n in b  {copy create ki hai in b()}     {Memory legi alag se}

Pass By reference
a(n) ----> b(&n)   n in a == n in b
a(n) ----> b(&j)   n in a == j in b     memory yahi use karle but usko ek naya naaam dede
*/


#include<iostream>
using namespace std;


void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}
 
int main()
{

    int i = 5;
    int& j = i;

    cout << "i : " << i << endl;
    i++;
    cout << "j : " << j << endl;
    j++;
    cout << "i : " << i << endl;
    cout << "j : " << j << endl;

    cout << "i : " << &i << endl;
    cout << "j : " << &j << endl;
    /*
    i : 0x7ffc0248e2f4
    j : 0x7ffc0248e2f4
    */


     i = 6;
    cout<< "Befor Update: " << i << endl;
    update1(i);
    cout<< "After Update1: " << i << endl;
    update2(i);
    cout<< "After Update2: " << i << endl;
 
 
    return 0;
}