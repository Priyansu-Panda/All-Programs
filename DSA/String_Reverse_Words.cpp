#include<iostream>
using namespace std;

void swap( char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

// void swapS(string s, int start, int end){
void swapS(string &s, int start, int end){
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

/*

string reverseS(string s){

    int j = 0;
    string temp = "";
    while (s[i] != '\0'){
        
        int start = j;
        while(s[j] != ' ' || s[i] != '\0'){
            j++;
        }
        int end = j;

        for(int i = 0; i < s.length(); i++){
            int start = j;
            while(s[j] != ' '){
                j++;
            }
            int end = j;

    
            for(int k = start; k < end; k++){
                temp += s[k];
            }
                swapS(temp, start, end);

        }
    }
}
*/

string reverseS(string s){
    int i = 0;
    int start = 0;

    while (i < s.length()){
        if (i == s.length || s[i] == ' '){
            swapS(s,start,i-1);
            start = i+1;
        }
        i++;
    }
    return s;
}


int main() {
    string s = "Hello World";
    cout << reverseS(s) << endl; // Output should be "olleH dlroW"
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