
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

bool checkPallindrome(string a){
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
        //     temp += s[i];
        // }

        // if valid then ussey ek temp variable mein store karo anly valid characters no other nonsense
        if(isvalid(s[i])){          //if false then andar mat jao,age badho 
            temp.push_back(s[i]);   //temp.push_back() = s[i];  wrong 
        }
    }
    // To lower case
    for(int i = 0; i<temp.length(); i++){
        // temp[i] = toLowerCase(temp[i]);
        temp[i] = toLowerCase(temp[i]);
    }

    // return checkPallindrome(string s);
    // return checkPallindrome(string temp);
    cout << temp <<endl;
    //check Pallindrome
    return checkPallindrome(temp);
}


int main()
{

    string s ;
    cout << "Enter string "<< endl;
    // cin >> s;
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