#include<iostream>
using namespace std;

// char swap (char &a, char &b){
void swap (char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

// char rev(char nam, int n){
void rev(char nam, int n){
    int s= 0;
    int e = n-1;
    while (s<e){
        swap(nam[s],nam[e]);
        s++, e--;
        // swap(nam[s++],nam[e--]);
    }
}

// int getl(char naam){ //Wrong// You are passing a char array to the getl function, but the function is designed to accept a single char
int getl(char naam[]){
    int count = 0;
    for (int i=0; naam[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "ENter the name ";
    cin >> name ;
    cout << "UR name is "<< name<< endl;
    cout << "Size of ur name is "<< getl(name)<<endl;
    // cout << " Reverse of ur name is "<<rev(name, getl(name))<<endl; //Wrong //The rev function modifies the name array directly, so you don't need to print its return value. Instead, you print the reversed name directly from the name array.
    rev(name, getl(name));
    cout << " Reverse of ur name is "<<name<<endl;
 
    return 0;
}