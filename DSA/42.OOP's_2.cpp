#include<iostream>
using namespace std;

class Student{
    private:
    // Data members
    string name;
    int age;
    int height;

    public:
    // Functions
    int getAge(){
        return this->age;
    }
};


// PRIVATE Data memeber of any class cannot be inherited 

class Human{
    public:
    // Data members
    string name;
    int age;
    int height;
    int weight;

    public:
    // Functions
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }

    void bark(){
        cout << "Barking" <<endl;
    }
};


// INHERITANCE - Code can be reused .. wapas likhna nahi pada   
class Male : public Human{
    public:
    string color;

    void sleep(){
        cout << "Ninining" << endl;
    }
    
    void print(){
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Height: " << this->height << endl;
        cout << "Weight: " << this->weight << endl;
        cout << "Color: " << this -> color << endl;
    }
};


// Multi level Inheritence 
class Animal{
    public:
    string name;
    int age;
    int height;
    int weight;

    public:
    void speak(){
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal{

};

class Gs : public Dog{

};


// MUltiple Inheritence
class Hybrid : public Animal, public Human{

};


// Inheritance AmbiGUity
class A{
    public:
    void func(){
        cout << "I am A" << endl;
    }
};

class B{
    public:
    void func(){
        cout << "I am B" << endl;
    }
};

class C : public A, public B{

};

int main()
{

    Student s1;

    Male o1;
    cout << o1.age << endl;
    cout << o1.weight << endl;
    cout << o1.height << endl;
    cout << o1.name << endl;

    cout << o1.color<< endl;
    o1.sleep();

    o1.setWeight(96);
    o1.print();

// MULTI LEVEL INHERITENCE
    Gs g;
    Dog d;

    g.speak();
    d.age = 9;
    cout << d.age << endl;  // 9
    cout << g.age << endl;  // GARBAGE


// MULTIPLE INHERITENCE
    Hybrid h;
    h.speak();
    h.bark();

// Inheritance AmbiGUity
    C c;
    // c.func();
    // SCOPE RESOLUTION OPERATOR(::)
    c.A::func();
    c.B::func();




    cout << "FINE" << endl;

 
    return 0;
}