#include<iostream>
using namespace std;

long long int binarySearch(int n){


    int s= 0;
    int e = n;
    long long int mid = s+(e-s)/2;

    long long int ans = -1;
    while(s<=e){
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        // if (square<=n){
        //     ans = mid;
        //     s=mid+1;
        // }
        if (square<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){

    double factor =1;
    double ans = tempSol;

    for (int i = 0;i<precision;i++){
        factor= factor/10;
        // 0.1
        // 0.01
        // 0.001
        for(double j = tempSol; j*j<=n; j=j+factor){
            ans= j;
        }
    }
    // return tempSol;     // gonna return only the integral part 
    return ans;


}

int sqrt(int x){
    return binarySearch(x);
}


int main(){
    int n;
    cout <<" Enter the num: "<<endl;
    cin>> n;

    int tempSoln= sqrt(n);
    cout<<" Answer is: "<<morePrecision(n,3,tempSoln)<<endl;

    return 0;
}