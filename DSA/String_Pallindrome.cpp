// If str = reversestr --> Pallindrome


#include<iostream>
using namespace std;

bool isvalid(char s){
    if ((s>= 'a' && s <= 'z') || (s>='A' && s<= 'Z') || (s >= '0' && s <= '9')){
        return true;
        // return 1;
    }
    else{
        return false;
        // return 0;
    }
}

// OR

// bool isvalid(char s){
//     return (s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9');
// }

char toLowerCase(char ch){
    if ((ch>='a' && ch <= 'z')|| (ch >= '0' && ch <= '9')){
       return ch;
    }
    else
    {
        char temp  = ch - 'A' + 'a';    // if ch = 'B'  -> then tep = 97 - 96 + 64 => 1+64 = 65 === 'b'
        return temp;
    }
}

// OR

// char toLowerCase(char ch){
//     if (ch >= 'A' && ch <= 'Z'){
//         return ch + 'a' - 'A';
//     }
//     return ch;
// }

bool checkPallindrome(string a){    // not char a
    int s = 0;
    int e = a.length()-1;

    while(s<=e){
        if ( a[s] != a[e]){     //agar first aur last lem same naa ho to its not pallindrome    {noon --> n = n}, {moon --> m != n} 
            return 0;   //false
        }
        else{
            s++;
            e--;
        }

        // return 1;    dont write it inside while loop its wrong 
    }
    // agar tum yaha tak pahaunch gaye ho ... iska matlab tumne pura travel kar liy ahai and its not returned yet so it must be pallindrome 
    return 1;
}



bool isPallindrome(string s){
    // string temp = " ";
    string temp = "";
    
    // Check Valid String 
    for(int i = 0; i<s.length(); i++){
        // if(s[i] >= 'a' && s[i] <= 'z'){
        //     temp += s[i];    // this appending / concatenate format only applicable for string datatype
        // }

        // if valid then ussey ek temp variable mein store karo anly valid characters no other nonsense
        if(isvalid(s[i])){      //if true then store    //if false then andar mat jao,age badho 
            temp.push_back(s[i]);   //temp.push_back() = s[i];  wrong 
        }
    }
    cout <<"Ur temp is :"<< temp <<endl;

    // To lower case
    for(int i = 0; i<temp.length(); i++){
        temp[i] = toLowerCase(temp[i]);
    }
    cout <<"Ur New temp is :"<< temp <<endl;

    // return checkPallindrome(string s);
    // return checkPallindrome(string temp);
    // cout << temp <<endl;
    //check Pallindrome
    return checkPallindrome(temp);
}


int main()
{

    string s ;
    cout << "Enter string "<< endl;
    // cin >> s;    //wrong bas ek word conider karega 
    getline(cin,s);   // Use getline to accept multiple words
    // to allow the user to input multiple words, you should use getline(cin, s); instead of cin >> s;. This will allow the user to input a string containing spaces, which will be treated as a single string.


    // cin.getline(str, size);
    //getline(cin,str);

    // if(isPallindrome(s)){
    //     cout << "Pallindrome" << endl;
    // }
    // else{
    //     cout << "Not Pallindrome" << endl;
    // }

    cout << (isPallindrome(s) ? "Its Pallindrome" : "Its not Pallindrome" )<< endl;
 
    return 0;
}


// diff betwn char array 

// length ---> str.length()
// str.push_back('a')
// str.pop()


//// APpending  in char 

// int main() {
//     char s[] = "Hello!123World";
//     char temp[100] = ""; // Define temp as an empty character array

//     // Check Valid Characters
//     int j = 0;
//     for(int i = 0; s[i] != '\0'; i++) {
//         if(s[i] >= 'a' && s[i] <= 'z') {
//             temp[j++] = s[i]; // Append valid characters to temp
//         }
//     }
//     temp[j] = '\0'; // Null terminate the resulting string

//     // Print the result
//     cout << "Valid characters in the string: " << temp << endl;






/*
class Solution {
public:
    bool isPalindrome(string s) {

        // Solution 3
        int n = s.size();

        for(int i = 0, j = n - 1; i < j; i++, j--){
            // if(!isalnum(s[i])) i++;
            // if(!isalnum(s[j])) j--;
            while(!isalnum(s[i]) && i < j) i++;
            while(!isalnum(s[j]) && i < j) j--;

            if(tolower(s[i]) != tolower(s[j])) return false;
        }

        return true;
    }
}

*/