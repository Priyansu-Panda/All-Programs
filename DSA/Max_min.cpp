#include<iostream>
#include <limits.h> // for INT_MIN and INT_MAX
using namespace std;


// INT_MIN --> -2^31
// INT_MAX --> 2^31 - 1


int getMax(int num[], int n){
    int max = INT_MIN ;
    int min = INT_MAX;

    for (int  =0; i<n; i++){
        maxi = max(maxi,num[i]);
        if (num[i]>max){
            max = num[i];
        }
        mini = min(mini,num[i]);
        else if (num[i]<min)
        {
            min = num[i];   
        }

    }


    // returning max value
    return max, min;
}

int main (){

    int size ;
    cin >> size ;

    // int num[size];   ghatia practice

    int num[100];

    for (int i = 0; i < size; i++){
        cin >> num[i]; 
    }


    cout << " Max & min value of array is " << getMax(num, size) << endl;

    return 0;
}
