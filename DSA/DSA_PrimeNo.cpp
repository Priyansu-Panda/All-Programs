// O(n*(log(log n)))


#include<iostream>
using namespace std;

// bool isPrime(int n){

//     if(n<=1){
//         return false;
//     }
//     for(int i = 2; i < n ; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

int countPrimes(int n){
    int count = 0;
    bool prime[n+1] = {true};
    prime[0] = prime[1] = false;

    for(int i = 2; i < n ; i++){

        if(prime[i]){  // agar prime no. mile // if(0) ~ False
            count++;
            for(int j = 2*i; j<n; j= j+i){  // after every multiple _x2 = itv all starts iterates by x+i ---> 1+3,2+3,3+3,4+3
                prime[j] = false;   // make all its table no. as non-prime
            }
        }
    }
    return count;
};


int main()
{

    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "It is a Prime Number" << endl;
    }
    else{
        cout << " It is not a Prime Number " << endl;
    }

    return 0;
}