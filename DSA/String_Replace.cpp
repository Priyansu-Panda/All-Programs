#include<iostream>
using namespace std;

/*
string replaceSpace(string str){
    for(int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
            // Replace the space at index i with the string "@40"
            // Use the insert function to insert the string "@40" at position i
            str.insert(i, "@40");
            // Move the index to the end of the inserted string
            i += 2; // Because "@40" has three characters and we already incremented i in the loop
        }
    }
    return str;
}
*/


string replaceSpace(string str){
    for(int i = 0; i<str.length(); i++){
        // if (str[i] = ' '){
        if (str[i] == ' '){
            // str[i] = '@40';
            // str[i] = "@40";
            // str[i]= '@';
            // str[i]= '4';
            // str[i]= '0';

            // str.push_back('@') ;
            // str.push_back('4') ;
            // str.push_back('0') ;

            str[i]+='@';
            str[i]+='4';
            str[i]+='0';
        }
    }
    return str;
}

string replace(string str){
    string temp = "";  // dont write " "  ....  write ""
    for(int i = 0; i<str.length(); i++){
        if (str[i] == ' '){
            temp += "@40";
            // temp.push_back('@') ;
            // temp.push_back('4') ;
            // temp.push_back('0')
        }
        else{
            // temp.push_back(s[i]);
            temp += str[i];         // In C++, temp += str[i]; appends the character str[i] to the string temp. So if temp initially contains "su" and then you execute temp += "du";, temp will become "sudu" because it concatenates "du" to the existing content of temp, resulting in "sudu". On the other hand, if you write temp = "du";, it assigns "du" to temp, replacing the previous content. So, if temp initially contained "su" and then you execute temp = "du";, temp will be "du", and the previous content "su" will be lost.
        }
    }
    return temp;
}


int main()
{
    string str;
    cout << "Enter the string "<< endl;
    getline(cin, str);
    cout << "The string after replacing the spaces is " << replaceSpace(str) << endl;
    cout << "Enter the string2 "<< endl;
    getline(cin, str);
    cout << "The string after replacing the spaces is " << replace(str) << endl;
 
 
    return 0;
}


// #include <string.h>
// using namespace std;
// int main()
// {
//     string s = "my name is akash";
//     int start = 0;
//     int p = 0;
//     for (int i = 0; i <= s.length(); i++)
//     {
//         if (s[p] == ' ' || s[p] == '\0')
//         {
//             int end = p - 1;
//             while (start <= end)
//             {
//                 swap(s[start],s[end]);
//                 start++;
//                 end--;
//             }
//             start=p+1;
//         }
//         p++;
//     }
//     cout<<s;
// }