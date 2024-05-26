/*
a - 0
b - 1
c - 2
...
z - 25
*/ 



#include<iostream>
using namespace std;


int getMaxOcc(string str){
    int arr[26] = {0};  // first assign all elements in the array to 0

    int number = -1;
    for(int i = 0; i < str.length(); i++){
        if(ch[i] >='a' && ch[i] <= 'z'){    //lowercase
            number = ch - 'a';
        }

        if(ch[i] >='A' && ch[i] <= 'Z'){    //Uppercase
            number = ch - 'A';
        }
        arr[number]++;  // arr[number] = arr[number] + 1;
    }

    int maxi = -1, ans = -1;
    for(int i = 0; i<26; i++){

        if(maxi<arr[i]){    // if arr elements is maximum
            maxi = arr[i];  // maxi will contain the max number not the lement itself 
            ans = i;        // we will get the max index then match with the alphabets
        }
    }
    int finalans = ans + 'a';
    return finalans;
}



int main()
{

    string s;
    getline(cin,s);
    cout << getMaxOcc(s) << endl;
 
 
    return 0;
}