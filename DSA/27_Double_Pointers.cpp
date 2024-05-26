/*

*p2 -> value present at address pointed by p2
**p2 -> p2 ke andar do level andar jana hai 

*/

#include<iostream>
using namespace std;
 

int main()
{

    int i =5;
    int *p = &i;
    int **p2 = &p;

    
    cout << endl << "content of i" <<endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    
    cout << endl << "content of p" <<endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl << "content of p2" <<endl;
    cout << &p << endl;
    cout << p2 << endl;

    return 0;
}