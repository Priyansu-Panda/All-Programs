#include<iostream>
using namespace std;

// Jis hisab se rounds chalr ah hoga uss hisab se largest element place hotey jayenge 
// ** for every i-th round hum i-th largest elememnt ko uske right side mein pahauncha dete hain

// if a>b swap (b,a)    b = a+1
// if a<b igrnore

// rounds -> n-1

// [10|1|7|6|14|9] -> [1|10|7|6|14|9]
// [1|10|7|6|14|9] -> [1|7|10|6|14|9]
// [1|7|10|6|14|9] -> [1|7|6|10|14|9]
// [1|7|6|10|14|9] -> [1|7|6|10|14|9]
// 10<14 so no swapping
// [1|7|6|10|14|9] -> [1|7|6|10|9|14]   Largest element paced at the end 

void bubbleSort(int arr[], int n){
    // Round 1--> n-1 elem
    // Round 2--> n-2 elem
    // Round 3--> n-3 elem

    // round 1 to 5  for 6 elements

    for (int i = 1; i < n; i++)     // i = {1,2,....,n-1 elem}

    // OR   for (int i = 0; i < n-1; i++)

        // for round 1 to n-1    i.e i=0 ---- i<n-1
    {
        bool swapped = false;

        //OR    for ( int j = 0; j < n - i - 1; j++){   for i = 0 to n-2

        for ( int j = 0; j < n - i; j++){
            // j = {0.....n-i}
            //  1st round travel till (n-1)th elem
            //  2nd round travel till (n-2)th elem
            //  3rd round travel till (n-3)th elem
            //  4th round travel till (n-4)th elem
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false ){     // already sorted
            break;
        }

    }

}

// best case   -> O(n)
// Worst case   -> O(n^2)
