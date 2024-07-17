#include<iostream>
using namespace std;

void rev(string str, int index){
    if (index == str.length()){
        return;
    }
    rev(str, index+1);
    cout << str;
}

void revC(char* str){
    if (str[0] == '\0'){
        return;
    }
    revC(str+1);
    cout << str[0];
}

// void reverse(string str, int i, int j){
void reverse(string& str, int i, int j){
    cout << str <<endl;
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++,j--;
    reverse(str, i, j);
}

void reverse2(string& str, int i){
    int n = str.length();
    if(i>=n/2){
        return;
    }
    swap(str[i],str[n-i-1]);
    i++;
    reverse2(str, i);
}

int main()
{
    string str = "Kanha";
    cout << "IN REV: "<<endl;
    rev(str, str.length()-1);

    str = "abcde";

    // reverse(str,0,str.length());
    reverse(str,0,str.length()-1);
    cout << endl;
    cout << "IN REVERSE : "<<str << endl;
 
    return 0;
}