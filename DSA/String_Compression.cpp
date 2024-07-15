#include<iostream>
using namespace std;

int compressS(char arr[]){
    int i ;
    int ansIndex = 0;
    int n = arr.size();

    while( i < n){
        int j = i + 1;
        while(j<n && arr[i] == arr[j] ){
            j++;
        }

        char[ansIndex++] = char[];

        int count = j-i;

        if(count > 1){
            string cnt = to_string(count);
            for(char ch: cnt){
                char[ansIndex++] =ch;
            }
        }
        i=j;
    }
    return ansIndex;
}

int compactS(char arr[], int n, char arr2[]){

    int i ,j=0;
    // int n = arr.size();
    // char arr2[] = {0};

    for( int i = 0; i < n; i++){
        int ans = 1;
        if ( arr[i] == arr[i+1]){
            ans++;
        }

        // Store the character
        arr2[j]= arr[i];
        j++;

        // Store the count of the character
        arr[j] = ans + '0' ;  // Convert the count to a character
        j++;
    }

    // Return the new length of the compacted array
    return j+1;
}

int main()
{
 
 
    return 0;
}