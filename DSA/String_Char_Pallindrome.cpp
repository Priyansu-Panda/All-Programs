#include<iostream>
#include <cstring>
using namespace std;


bool checkCharPallindrome(char a[], int n){
    int st = 0;
    // int e = a.size() - 1;    // this is valid for strings not for char arrays 
    int e = n - 1;
    while(st <= e){
        if (a[st] == a[e]){
            st++, e--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char a[100];
    cin >> a;
    int n = strlen(a);
    // cout << if(checkCharPallindrome(a, n))? "Yes" : "No";   // No Need to write if statement 
    cout << (checkCharPallindrome(a, n))? "Yes" : "No";

}