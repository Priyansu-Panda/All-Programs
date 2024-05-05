#include<iostream>
using namespace std;
 
int getL(char name[]){
    int count = 0;
    int i=0;
    // for(; name != '\0'; i++){    //wrong
    for(; name[i] != '\0'; i++){
        count++;
    }
    return count;
}


int main()
{
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout << "Length is "<<getL(name)<<endl;
 
 
    return 0;
}