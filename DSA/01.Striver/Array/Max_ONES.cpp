#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {0,1,1,0,0,0,1,1,1,1,0,0,0,00,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c = 0;

    for(int i =0 ; i<n; i++){
        if(arr[i] == 1){
            c++;
        }
    }

    cout << "There are total : " << c << " ONES" << endl;
    c= 0;
    int max = 1; 
    for(int i = 0; i<n; i++){
        if(arr[i] == 1)
        {
            c++;
            if(c>max)
                max = c;
        }
        // if(arr[i] == 0){
        else
        {
            c=0;
        }
    }

    cout << "TOtal : " << max << " Consecutive ones" << endl;

    return 0;
}