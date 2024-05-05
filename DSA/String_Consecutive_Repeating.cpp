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
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n){
        int j = i+1;
        if ( j<n && chars[i] == chars[j]){
            j++;
        }

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
        i=j;
    }  
    return ansIndex;
}


int main()
{
 
 
    return 0;
}






















