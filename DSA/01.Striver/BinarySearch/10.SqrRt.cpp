#include<iostream>
using namespace std;

void sqr(int n){
    int l = 0, h = n, m, sq = 0;
    while(l<=h){
        m = (l+h)/2;
        sq = m*m;
        // if(sq == n){
        //     cout << m << endl;
        //     return;
        // } 
        // else if(sq>n)    h = m-1;
        // l always points to the corect version but h point always to the max version ... a point will come either l or h will point to corerect ans 
        if(sq<=n)    l = m+1;
        else   h = m-1;
    }
    cout << "ceil:" << h << endl; 
    return;
}
 
int main()
{
    int n = 172;
    sqr(n);
 
    return 0;
}