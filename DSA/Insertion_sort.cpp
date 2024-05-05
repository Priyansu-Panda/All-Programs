// cards ke beech mein dalna hai

// Worst -> O(n^2)
// BEst-> O(n)


#include<iostream>
using namespace std;
 
void insertionSort(int n,int arr[]){
// 0---(n-1)
    for(int i = 1; i<n; i++){   //No. of rounds
    // First element ko sorted maan le ... baki sare elem ko tujhe sort karna hai
        int temp = arr[i];      // consider it to be the sorted elem
        int j = i-1;
        for(; j>=0; j--){   // elem at i position now comapre it with all <i i.e i-1---0

            if (arr[j]>temp){     
                // shift 
                arr[j+1] = arr[j];
            }
            else{   //rukjao .. loop se niklo
                break;
            }
        }
        arr[j+1] = temp;    //after comparing with the i-1 elements if found that the elem is < temp then uske same wale position mein tamp ko dalo because at that moment j will be at 2 in [2|'8'|8|10], temp = 7... temp needs to be placed infront of 2
    }
}    

// R1 -> i = 1, j = 0
// R2 -> i = 2, j = 1


int main()
{
 
 
    return 0;
}