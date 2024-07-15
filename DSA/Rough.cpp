#include<iostream>
using namespace std;

int compactS(char arr[]){
    int i=0,j=0;
    int n = arr.size();
    int ansIndex = 0;
    while(i < n){
        for (j<n && arr[i] == arr[j]){
            j++;
        }
        arr[ansIndex++]= arr[i];

        int count = j-i;
        if(count > 1){
        //     for(int k=0;k<count;k++){
        //         arr[ansIndex++] = arr[i];
        //    }
        string cnt = to_string(count);
            for(char ch : cnt){
                arr[ansIndex++] = ch;
            }
            i = j;
        }
    }
    return ansIndex;
}


int main()
{
 
 
    return 0;
}