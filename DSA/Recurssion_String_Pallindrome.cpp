#include<iostream>
#include<string>
using namespace std;

// bool pallin2(string& str){
// string pallin(char *str){
bool pallin2(string str){
    if(str.length()<=1){
        return true;
    }

    if(str[0] != str[str.length()-1]){
        return false;
    }

    return pallin2(str.substr(1,str.length()-2));
}
/*
NOTE: If str = "radar", then:

str.length() is 5.
str.substr(1, str.length() - 2) extracts a substring starting from index 1 (which is 'a') and having a length of 5 - 2 = 3 characters.
So, str.substr(1, 3) returns "ada".

*/

bool isPalindrome(string str) {
    if (str.length() <= 1) {
        return true;
    }
    if (str[0] != str[str.length() - 1]) {  
        return false;
    }
    // Recursive call without using explicit indices
    return isPalindrome(str.substr(1, str.length() - 2));
}



// string pallin3(string& str, int i, int j){
//     if(i == j){
//         return str.substr(i,1);
//         }
//         if(i > j){
//             return "";
//             }
//             if(str[i] != str[j]){
//                 return "";
//                 }

// }

bool pallin(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){   // EK CASE KARDO
        return false;
    }
    else{
        return pallin(str,++i,--j);     // BAKI RECURSSION SAMBHAL LEGA
    }
}

int main(){

    string str = "abba";
    string str2 = "Abba";
    string str3 = "Kanha";

    cout << pallin(str , 0, str.length()-1);
    cout << pallin(str2 , 0, str2.length()-1);
    cout << pallin(str3 , 0, str3.length()-1);


    return 0;
}