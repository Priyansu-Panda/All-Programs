#include<iostream>
using namespace std;

bool checkPallindrome(char a[], int n){     // without creating another variable .... chceking in the same variable 
    //We took 2 pointers --> one at start one at end
    // now compared s & e if equal then continue , else niklo yeh woh nahi hai 
    int s = 0;
    int e = n-1;

    while(s<e){
        if (a[s] != a[e]){
            return 0;   //false
        }else{
            s++;
            e--;
        }
    }
    return 1;   //true
}




void swap(char &c1, char &c2){
    char temp = c1;
    c1 = c2;
    c2 = temp;
}


void reverse(char arr[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int getLength(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char name[100];
    cout<<"Enter your name"<<endl;
    cin>>name;

    int len = getLength(name);

    // char name2[100] = reverse(name,len);
//    ||
//    \/
//    char name2[100];
//     strcpy(name2, name); // Copy contents of name to name2
//     reverse(name2, len); // Reverse contents of name2   


    // char name2[100] = name;      //In C++, arrays are treated as pointers, and they decay into pointers when assigned to another array. This means that when you write char name2[100] = name;, you're not copying the contents of name to name2; instead, you're making name2 point to the same memory location as name. Any changes made to name2 would affect name and vice versa.


    // char name2[100];
    // strcpy(name2, name);


    /*
    char name2[100] ;
    reverse(name2,len);
    */

    // cout << "Name1 is "<< name<<"NAme 2 is "<< name2<<endl;

    cout << "IT IS  " << (checkPallindrome(name, len) ? "Palindrome" : "Not Palindrome") << endl;

    // cout << "IT IS  " << checkPallindrome(name, len) << endl;    //0 = false --- Not PAllindrom ||| 1= true --- Pallindrome


    // int count =0;
    // arr[n-1]>arr[0]?count++:count;

/*
    for(int i =0; i<len;i++){
        if (name[i]==name2[i]){
            cout<<"palindrome"<<endl;
        }else{
            cout<<"not palindrome"<<endl;
        }
    }
*/
    // if(name2 == name){
    //     cout<<"palindrome"<<endl;
    // }else{
    //     cout<<"not palindrome"<<endl;
    // }
 
 
    return 0;
}






/*
#include <iostream>

void swap(char &c1, char &c2) {
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

void reverse(char arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    char name[100];
    std::cout << "Enter your name: ";
    std::cin >> name;

    int len = strlen(name);

    char name2[100];
    strcpy(name2, name); // Copy contents of name to name2
    reverse(name2, len); // Reverse contents of name2

    std::cout << "Name1: " << name << std::endl;
    std::cout << "Name2: " << name2 << std::endl;

    return 0;
}

*/