// Polymorphism - when a single thing exist in more than multiple forms
#include<iostream>
using namespace std;


class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // a = a + obj.a;
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Hello" + (value2 - value1) << endl;
    }
};
 
int main()
{

    B obj;
    obj.a = 1;
    obj.b = 2;
    cout << obj.add() << endl;
    

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;


 
 
    return 0;
}