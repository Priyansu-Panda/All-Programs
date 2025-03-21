#include<iostream>
// #include "42.OOP's_1_Class.cpp"
#include<string.h>
using namespace std;

class Hero{

    private:
    int health;

    public: 
    char level;

    // char name[100];
    char *name;

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout << level << endl;
    }

    // Function that are there in class by which u can access variables in the class

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setHealth(int h, char name){
        if (name == 'A')
            health = h;
    }

    void seLevel(char ch){
        level = ch;
    }
    // Simple Constructor Created NEWLY
    Hero(){
        cout << "Simple COnstructor CAlled" << endl;
    }


    // PArameterised COnstructor Created NEWLY
    Hero(int health){
        cout << " PArameterised COnstructor Called" <<endl; 
        // this is also a constructor 
        // health = health;     // ACC.to scope concept usika vvalue(function wala) usimein daal rah hai 
        this->health = health;
        cout << "Address of this " << this << endl;
    }

    // PArameterised COnstructor Created NEWLY
    Hero(int health, char level){ 
        this->health = health;
        this -> level = level;      // Object ke level ke andar functaion wale level ka value rakh diya 
        cout << "Address of this " << this << endl;
    }


    void print(){
        cout << "Level is : " << this-> level << endl;
        cout << "Health is : " << this-> health << endl;
    }
    

    // Copy Constructor Created NEWLY 
    // Hero(Hero nam){      // Pass by value    //Infinite looop of copy constructorly will be called 

    // Hero(Hero& nam){        // Pass by Reference
    //     cout << "COpy Constructor CAlled" <<endl;
    //     this->health = nam.health;
    //     this->level = nam.level;
    // }

    Hero(Hero& temp){        // Pass by Reference
        // FOR DEEP COPY
        char *ch = new char[strlen(temp.name)+1];   // Created a neww array so as to not use the same memory address 
        strcpy(ch,temp.name);
        cout << "COpy Constructor CAlled" <<endl;
        this->name =ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print2(){
        cout <<  "{" << endl;
        cout << "Level is : " << this-> level << endl;
        cout << "Health is : " << this-> health << endl;
        cout << "NAme is : " << this-> name << endl;
        cout <<  "}" << endl;

    }


    // Destructor
    ~Hero(){
        cout << "Destructor Called" << endl;
    }



};
 
int main()
{
    // Creation of object Kan of datatype(user defined datatupe) Hero
    Hero Kan;

    cout << sizeof(Kan) << endl;
    cout << "Health of Kan is : " << Kan.getHealth() << endl;
    cout << "Level of Kan is : " << Kan.getLevel() << endl;

    Kan.setHealth(97);
    Kan.seLevel('C');
    cout << "Health of Kan is : " << Kan.getHealth() << endl;
    cout << "Level of Kan is : " << Kan.getLevel() << endl;

    // Since health is now Private so it can only be accesed inside the function
    // Kan.health = 96;    // Will Show Error as its by defauylt private ...Need to convert the class in side tro public    
    Kan.level = 'A';    // Will Show Error as its by defauylt private ...Need to convert the class in side tro public

    cout << "LEVEL IS " << Kan.level << endl;
 

    // Static creation 
    Hero Pri; 

    Pri.setHealth(709);
    Pri.seLevel('C');
    cout << "LEvel is " << Pri.level << endl;
    cout << "Health is " << Pri.getHealth() << endl;

    // Dynamically
    // int *i = new i;  i {710}---> (heap ke andar) 710 mein ek memory block of 4 size create hoga 
    Hero *pri = new Hero; 

    pri -> setHealth(70);
    pri -> seLevel('D');

    cout << "LEvel is " << (*pri).level << endl;
    // cout << "LEvel is " << pri.level << endl;    // Wont work because pri is an pointer that stores address... we need the object ... which is stored in th eaddress .. so to acess it we use derefeernce operator

    // cout << "Health is " << (*pri).getHealth() << endl;
    // OR
    cout << "Health is " << pri->getHealth() << endl;



    // Objecet created statically 
    Hero K ;     // K.Hero() wiill be called --> Constructor
    // to show constructor 

    // Dynamically 
    Hero *Kp = new Hero ;     // Kp.Hero() wiill be called --> Constructor
    // OR
    // Hero *Kp = new Hero() ;     // Kp.Hero() wiill be called --> Constructor

    Kp -> print();  
    // OR
    (*Kp).print();



    // Current Object ka adress will be stored in THIS keyword  

    // THIS is a pointer which stores the address of the latest object 
    // Parameterised Constructor
    Hero kp(70);
    cout <<" addres of kp: "<< &kp << endl;
    kp.print();
    
    Hero kp2(70,'A');
    kp2.print();


    Hero suresh(90,'D');
    suresh.print();

    // Copy Constructor
    Hero ramesh(suresh);    // suresh is an object of hero type
    ramesh.print();
    // OR
    // ramesh.health = suresh.health;
    // ramesh.level = suresh.level;



    Hero h1;
    h1.setHealth(70);
    h1.seLevel('A');
    // h1.setName("Kanpri");
    char name[10] = "Kanpri";
    h1.setName(name);
    h1.print2();


    // USe of Default Copy Constructor 
    // Hero h2 = h1; 
    // OR
    Hero h2(h1);
    h2.print2();    // both h1 and h2 will print same 

    h1.name[0] = 'G';
    h1.print2();

    h2.print2();    // both h1 and h2 will print same

    // SHALLOW COPY -> Same memory ko access kar rahe ho via 2 diff names 

// ASSIGNMENT OPERATOR
    h1 = h2;

    // STATIC
    Hero a;

    // DYNAMIC
    Hero *b = new Hero;
        // OR
    // Hero *b = new Hero();
    // Destructor CAled manually 
    delete b;



    return 0;
}