// Time -> O(n)+O(1) = O(n)

#include<iostream>
using namespace std;

// char getMaxCharacter(string s){
int getMaxCharacter(string s){
    int arr[26] = {0};

    // creating an array of count of characters
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        if (ch>='a' && ch <= 'z'){
            number = ch - 'a';
            arr[number]++; //Count of chracters in string // array created of text size of konse letter ko kounsa place milega 
            // arr[number] = arr[number] + 1;

            // [0|0|0|0|2|0|0|3|0|1|0]
        }
        else{   //Uppercase
            number = ch - 'A';
            arr[number]++;
        }
    }

    // finding max charcter 
    int maxi = -1, ans = 0;
    for(int i = 0; i<s.length(); i++){
    // for(int i = 0; i<26; i++){
        if(maxi<arr[i]){    // find max by comparing its value with the value inside the array
            ans=i;
            maxi=arr[i];
        }
    }
    // int finalAns =  'a' + ans;

    // char finalAns =  'a' + ans;     // doesnt matter what data type it is , the return type depends on the type of function  
    // return finalAns;
    return 'a' + ans;
}


int main()
{
    cout << "Enter the text " <<endl;
    string s;
    cin>> s;
    cout << getMaxCharacter(s) << endl;

    return 0;
}
