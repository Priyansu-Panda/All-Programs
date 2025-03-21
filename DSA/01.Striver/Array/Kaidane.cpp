#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int ans = 0;
    int maxi = -21000;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;


    for(int i = 0; i<n; i++){
        if (sum == 0){
            start = i;
        }
        sum+= arr[i];
        if(sum < 0){
            sum = 0;
            // el = arr[i];
        }
        if(sum>maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
    }
 
    return 0;
}





#include<iostream>
using namespace std;

int max(int &l, int &h){
    if(l<h){
        return h;
    }
    return l;
}

void maxSum(int arr[], int n){
    int sum = 0, maxi = -2000;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        if(sum<0)       // DONT CARRY ANY NEGATIVES 
        {
        sum = 0;
        }

        if(sum>maxi){
            maxi = sum;
        }
    //          OR     
        // maxi = max(sum,maxi);
    }
    cout << "Max Sum: " << maxi << endl;
    // return maxi;
}
 
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxSum(arr,n);
 
    return 0;
}






















#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int maxi = -2400;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = 0; j<n; j++){
            sum += arr[j];
            maxi = max(sum,maxi); 
        }
    }


    return 0;
}





#include<iostream>
using namespace std;


int maxi(int &l, int &h){
    if(l<h){
        return h;
    }
    return l;
}



void maxSum(int arr[], int n){
    int k= 0, s=0, max = 0;
    while(k<n){
        for(int i = 0; i<n; i++){
            s=0;
            for(int j =k ; j<i ; j++){
                s+=arr[j];
                max = maxi(s,max);
                // arr2[++] =arr[j]; 
            }
        }
        k++;
    }
    cout << max << endl;    
    return;
}


int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxSum(arr,n);
 
    return 0;
}

