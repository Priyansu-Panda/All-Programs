// #include<iostream>
// using namespace std;
 
// int compress(char chars[] ){
//     int i = 0;
//     int n = char.size();
//     while(i < 2*n){
//         int j =0 ;
//         if(arr[i] == arr[i+j]){
//             j++;
//         }
//         for(int i = 0; i<n; i++){
//             for(int k = n;k>i+1;k-- ){
//                 if (j <10)
//                     chars[k] = chas[k-1]
//                 else
//                 {
//                     chars[k] = chars[k-2];
//                 }
//             }
//         }
//         chars[i+1]= j;
//         i+=j;
//         // j=i+1;
//     }
//     return chars;
// }

// int main()
// {
//     chars[] = ['a','a','a','a','b','b','b','c'];
//     // int n= chars.size();
//     int n = strlen(chars);
//     chars =  compress(chars);
//     for (int i =0 ; i<n; i++){
//         cout << chars[i]<< ' , ';
//     }
//     cout << endl;
 
 
//     return 0;
// }



#include<iostream>
using namespace std;
 
int compress ( char chars[]){
    int i = 0;      //for traversing the entire vector
    int ansIndex = 0;   //chars ka elements and counts kahan dalun for counting purpose
    int n = chars.size();

    while(i<n){
        int j = i+1;
        if ( j<n && chars[i] == chars[j]){
            j++;
        }
        // iske bahar nikle ho ... matlab 
        // u got a new/ diff char encounter kiye ho {Unequal}
        // u have traversed the entire array {Also Sab Same nikle}

        // oldChar ko dalo
        chars[ansIndex++] = chars[i];

        int count = j-i;
        if (count > 1){
            // count ko dalo
            string cnt = to_string(count);  //converted to string  
            for ( char ch : cnt){
                chars[ansIndex++] = ch;
            }
        }
        // Moving to anew or diff character 
        i=j;
    }  
    // return i;
    return ansIndex;    //returns the size  
}


int main()
{
 
 
    return 0;
}






















