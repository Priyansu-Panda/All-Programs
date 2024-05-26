#include<iostream>
using namespace std;
 
bool isValid(char ch){
    if ((ch >='a' && ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >='0' && ch <= '9')){
        return 1;
    }
    else{
        return false;
    }
}

char lowercase(char ch){
    if((ch>= 'A' && ch <= 'Z') ){
        // char temp = ch - 'A' + 'a';
        // return temp;
        return  ch - 'A' + 'a';
    }
    else{   // its alraedy in Lowercase or is a digit 
        return ch;
    }
}
// bool checkPallindrome(char name[], int n ){
bool checkPallindrome(string name){

    int s = 0;
    int e = name.length()-1;

    if(lowercase(name[s]) != lowercase(name[e])){       // agar start != end ---> not a pallindrome
        return false;
    }
    else{   
        s++,e--;
    }
    // agar yahan tak pahaunch gaye means its a pallindrome
    return true;
}

bool isPallindrome(string s){
    string temp = "";

    for(int j = 0; j<s.length(); j++){
        if(isValid(s[j])){
            temp.push_back(s[j]);   // Add valid characters to temp
        }
    }
    // convert all to lower case
    for(int i = 0 ; i< temp.length(); j++){
        temp[j] = lowercase(temp[j]);
    }

    return checkPallindrome(temp);
}

void reverse (char ch[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(ch[s++],ch[e--]);
    }
}


int main()
{
    string str = "A man, a plan, a canal: Panama";
    cout << "Is palindrome: " << isPalindrome(str) << endl;

    string str2 = "hello";
    cout << "Reversed: " << reverseString(str2) << endl;

    return 0;
}