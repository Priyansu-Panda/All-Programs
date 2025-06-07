#include<iostream>
using namespace std;

long long fun(int n,int m){
    // if(n==0)    return 0;
    if(m==0)    return 1;
    long long res = 1;
    for(int i = 0; i<m; i++){
        res*=n;
    }
    return res;
}

void roott(int n, int m){
    // int val = fun(n,n);
    int l = 0, h = m, result = -1;
    while(l <= h){
        int mid = (l + h) / 2;

        // if(m**n <= m) l = m+1;
        if(fun(mid,n) <= m){
            result = mid;
            l = mid+1;
        } 
        else h = mid-1;
    }
    cout << result << endl;
    return;
}
int main()
{
    int n = 3, m = 27;

    roott(n,m);
 
    return 0;
}