#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int chotti = factorial(n-1);
    int badi = n*chotti;

    return badi;
}

/*
factorial(5) = 5 * factorial(4)
factorial(4) = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) = 1 * factorial(0)
factorial(0) = 1 (base case)
*/

int power( int n ){
    if (n == 0){    // base case
        return 1;
    }

    // Reccurssive & Processing 
    int chotiProb = power(n-1);
    int badiProb = 2 * chotiProb;

    return badiProb;
    // return 2*chotiProb;;
    // return 2*power(n-1);;;
}


int back(int n){
    if(n==0){
        cout << 0;
        return 1;
    }

    // for(int i = )
    // cout << n << "," << back(n-1) << endl;

    cout << n << ", ";

    return back(n-1);

}

void back2(int n){
    if(n==0){
        cout << 0;
        return ;
    }

    // for(int i = )
    // cout << n << "," << back(n-1) << endl;

    cout << n << ", ";
    back2(n-1);
    cout << endl;
    cout << n << ", ";

}
/*
INPUT -> COUT -> RECUURSIVE
*/
int main()
{
    int n;
    // cin >> n;
    n = 5;
    int ans = factorial(n);
    cout << ans << endl;

    int pow = power(n);
    cout << pow << endl;

    // int back = back(n);
    back(n);
    cout << endl;
    back2(n);
 
    return 0;
}