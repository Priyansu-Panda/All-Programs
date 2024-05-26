/*
like in int cin >> n 
int arr[20]
cin >> arr[i]   // iteratively enter values 

in char array 
char name[20]
 cin >> name 
 cout << name   // will print untill it encounters the null character \0

*/




/*
 Char arry -> copy -> strcpy(destination,source) 
 string -> copy -> str1 = str2
 char arry -> length -> strlen(arr)
 string -> length -> str.length()  str.size()
 char array -> compare -. strcmp(s1,s1)   ---> if != 0 {NOT EQUAL}... if =0 {EQUAL}
 String ->
 */


/*
void compareFunction(string s1, string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);
 
    if (x != 0) {
        cout << s1 
             << " is not equal to "
             << s2 << endl;
        if (x > 0)
            cout << s1 
                 << " is greater than "
                 << s2 << endl;
        else
            cout << s2 
                 << " is greater than "
                 << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
 
*/

// OR

/*
void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2) 
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
*/









//  when you input a string into a character array name[20], such as cin >> name;, what happens is that cin reads characters from the input stream and stores them in successive elements of the array until it encounters a whitespace character (space, tab, newline, etc.) or reaches the end of the input buffer. This is possible because a string in C++ is essentially an array of characters, terminated by a null character '\0'.

// if for taking input in an array[20] we write cin >> arr[i]  not cin >> arr = 20then why in char name [20] we can write cin >> name = love    cout << name {will print the name}
// a |\0|b|\0   -> 'a' 

#include<iostream>
using namespace std;

// void swap(char name1[], char name2[]){   // u have passed the element in th earry no the entire array
// void swap(char name1, char name2){  
void swap(char &name1, char &name2){  
    char temp = name1;
    name1= name2;
    name2= temp;
}

void reverse(char naam[], int n){
    // int  s = naam[0];    //it shows the position no the value at the position 
    int  s = 0;
    int e = n-1;
    // int e = naam[n-1];   //it shows the position no the value at the position 

    while(s<=e){
        swap(naam[s],naam[e]);
        s++, e--;
        // swap(naam[s++],naam[e--]);
    }
}

int getL(char name[]){
    int count = 0;
    int i=0;
    // for(; name != '\0'; i++){    //wrong
    for(; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter ur name "<< endl;
    cin >> name;

    cout << "Ur name is ";
    // for(int i = 0; name[i] != '\0'; i++)
    // {
    //     cout << name[i];
    // }
    // name[2]= '\0';

    cout << endl;
    cout << name << endl;       //Enter ur name  kan pri
                                // Ur name is  kan
    int len = getL(name);
    cout << "Length : "<< len << endl;

    reverse(name, len);
    cout << "Reverse : "<< name << endl;
    return 0;
}






// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a = 5;
//     int b = 7;
//     swap(a, b);
//     std::cout << "Values of a and b after swapping: " << a << ", " << b << std::endl;

//     return 0;
// }
