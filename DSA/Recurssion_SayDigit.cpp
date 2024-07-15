#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    if (n == 0){
        return;
    }
    // cout << arr[n];
    int digit = n%10;

    sayDigit(n/10,arr);

    cout << arr[digit] << " ";  // four one three
}
 
int main()
{
 
    string arr[] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};

    int n ;
    // cout <<
    // cin
    n = 413;

    sayDigit(n,arr);
    

    return 0;
}