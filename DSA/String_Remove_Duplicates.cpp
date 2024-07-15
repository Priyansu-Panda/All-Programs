#include<iostream>
#include <string>
using namespace std;

string removeDuplicates(string s){
    int i = 0;
    // while (i < s.length()){
    //     if (i == 0 || s[i] != s[i-1]) {
    //         s[i] = s[i];
    //         } else {
    //             s.erase(i, 1);
    //             i--;
    //             }
    //             i++;
    //             }
    // }
    while(i < s.length()){
        if (i < s.length() - 1 && s[i] == s[i+1]){
            // erase(i,2);  // Wrong
            s.erase(i,2);
        }
        if(i != 0){
            i--;
        }
        else
        {
            i++;
        }

        // if (i != 0 && s[i] == s[i - 1]) {
        //     s.erase(i - 1, 2);
        //     i--;
        // } else {
        //     i++;
        // }

    }
    return s;
}

bool isValid(char ch){
    if (ch == 0){
        return false;
    }
    return true;
}
string removeD(string s){
    string temp  = "";
    int j = 0;

    // Iterate through the string to remove duplicates
    for (int i = 0; i<s.length(); i++){

        // Check for consecutive duplicates
        if (i != 0 && s[i] == s[i - 1]) {
            // j = i;
            // while(s[j] != '\0'){    
            //     s[j] = s[j+2];
            //     j++;
            // }
            s[i] = s[i-1] = 0;  // Mark the duplicates as 0 (null character)
        }
    }
    for (int i = 0; i < s.length(); i++){
        // if (s[i] != 0 && s[i] != '\0' ) {
        //     temp[j] = s[i];
        //     j++;
        // }
        if (s[i] != 0) { // Only add non-null characters
            temp.push_back(s[i]);
        }
        // if (isValid(s[i])){
        //     temp.push_back(s[i]);
        // }
    }
    return temp;
}



int main()
{
    string s = "outtup";
    // cin >> s;
    cout << "GEEK Method" << removeDuplicates(s)<< endl;
    cout << "OLD MONK method " << removeD(s) << endl;

    return 0;
}