#include<iostream>
using namespace std;

// void swap1( string &i, string &j){   // WRONG
void swap1( char &i, char &j){
    char temp = i;
    i = j;
    j = temp;

    return;
}

bool equal(int a[26], int b[26]){

    for(int i = 0; i <26; i++){
        if(a[i] != b[i]){
            return false ;
        }
    }
    return true;
}


bool checkPerm(string s1, string s2){


    int count1[26] = {0};

    for(int i = 0 ; i <s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while(i < windowSize && i <s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (equal(count1,count2)){
        return true;
    }

    // age window badhao
    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar -'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        s2[index]--;

        i++;

        if (equal(count1,count2)){
            return true;
        }
    }
    return 0;
}


bool permutation(string s1, string s2){
    
    int j = 0;

    for(int i = 0; i<s1.length(); i++){

        if(s1[i] == '\0'){
            return true;
        }
        if(s2[j] == '\0'){
            return false;
        }

        if(s1[i] == s2[j]){
            cout << s1[i] << " Found" << endl;
            j=j-s1.length()+i;
        }
        j++;
    }
}




char maxRep(string str){
    int arr[26] = {0};
    char maxChar = '\0';
    int maxCount = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            arr[str[i] - 'a']++;
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            arr[str[i] - 'A']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] > maxCount){
            maxCount = arr[i];
            maxChar = i + 'a';
        }
    }

    return maxChar;
}



char valid (char &i){
    if (i >='A' && i <= 'Z'){
    //    return i = i + 32;
       return i + 32;
    }
    return i;
}


bool validPallinR(string str, int i){
    if(str.length() == 0){
        return true;
    }

    // base case
    // SAB THIK HAI
    if (i >= str.length()/2){
        return true;
    }

    if(valid(str[i]) == valid(str[str.length()-i-1])){
        return validPallinR(str, i+1);
    }


    return false;
}

bool validPallin(string str){
    if(str.length() == 0){
        return false;
    }
    bool palin = false ;
    int i = 0;
    while(i<str.length()-i-1){
        // if(valid(str[i]) == valid(str[str.length() - i - 1])){
        //     palin = true;
        //     i++;
        // }    // WRONG BAS EK HI CHECK KAREGA

        if((valid(str[i]) != valid(str[str.length()-i-1]))){
            return palin = false;
        }
        i++;
    }
    return true;
}


bool pallinR(string str, int i){
    if(i >= str.length()/2){
        return true;
    }

    if(str[i] != str[str.length() - i -1] ){
        return false;
    }
    return pallinR(str,i+1);
}


bool pallin(string str){
    int n = str.length();
    int i = 0;
    int j = n-1;
    bool pal = false;
    while (i< str.length()-i-1){
        // if(str[i] == str [str.length()-i-1]){
        //     pal = true;
        // }    // WRONG BAS EK HI CHECK KAREGA

        if(str[i] != str [str.length()-i-1]){
            // pal = false;
            return false;
        }
        i++;
    }
    // return pal;
    return true;
}



/*
string Mul(string str){

    string s = "";
    // int n = str.length();

    // for(char c : str[i]){
    //     if (c == )
    // }

    for(int i = 0; i < str.length(); i++){
        for(int j = i+1; j < str.length(); j++){
            if(str[i] == str[j]){
                s = s + str[i]; 
            }
        }
    }

    return s;
}
*/

void revR(string &str, int i){

    // BAse CAse 

    // if(i == str.length()-1){     // WRONG
    if(i >= str.length()/2){
        return;
    }
    swap1(str[i],str[str.length()-i-1]);
    revR(str,i+1);

    return;
}


void rev(string &str){
    int i = 0;
    int j = str.length() -1;

    while(i<j){
        // swap1(str[i++],str[j--]);
        swap1(str[i], str[j]);
        i++;
        j--;
    }
}


int lenR(string str, int i){
    if(str[i] == '\0'){
        return i;
    }
    return lenR(str,i+1);
}
 
int len(string str){
    int i = 0;

    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    string str = "Kanpri";

    int l = len(str);
    int l2 = lenR(str,0);
 

    cout << "Before: "<<str << endl;
    // cout << "After: "<<str.substr(0,l2) << endl;
    rev(str);
    revR(str,0);
    cout << "After: "<<str << endl;
    
    str = "noon";
    cout << (pallin(str)?"ITS PALIN" : "ITS NOT PALIN") << endl;


    str = "Noan";
    cout << (validPallin(str)?"ITS PALIN" : "ITS NOT PALIN") << endl;
    cout << (validPallinR(str,0)?"ITS PALINR" : "ITS NOT PALINR") << endl;


    str = "noono";
    cout << "MAx no. of character: " <<maxRep(str)<< endl;


    string s1 = "abc";
    string s2 = "ooobcaoo";

    permutation(s1,s2);


    checkPerm(s1,s2);



    return 0;
}















/*
#include <iostream>
using namespace std;

string Mul(string str) {
    string s = "";

    for (int i = 0; i < str.length(); i++) {
        bool foundDuplicate = false;
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                // Check if the character is already in the result string `s`
                bool alreadyAdded = false;
                for (int k = 0; k < s.length(); k++) {
                    if (s[k] == str[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    s += str[i]; // Add the character to result string
                }
                foundDuplicate = true;
                break; // Move to next character after finding duplicate
            }
        }
        // If no duplicate found for current character, mark as checked
        if (!foundDuplicate) {
            s += " "; // Use a space or any placeholder to mark checked characters
        }
    }

    // Remove spaces or placeholders from the result string
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string str = "programming";

    cout << "Original string: " << str << endl;
    cout << "Duplicates: " << Mul(str) << endl;

    return 0;
}
*/