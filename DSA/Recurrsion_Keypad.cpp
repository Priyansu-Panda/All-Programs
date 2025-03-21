#include<iostream>
using namespace std;
 
int main()
{
    char str[10][4] = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};

    int dig;
    string digi;

    cout << "Enter Number: ";

    cin>> digi;

    int i = 0;
    while(digi[i] != '\0'){
        dig = digi[i] - '0';
        for(int j =0 ; j<3; j++){
            cout << str[dig][j] << ", ";
        }
        i++;
        cout << ",";
    }



    return 0;
}













#include<iostream>
using namespace std;

int pow(int a, int b){

    // int ans = pow(a,b/2);
    if(b%2 == 0){
        // return ans*ans;
        return pow(a*a,b/2);
    }
    else{
        // return ans*ans*a;
        return a*pow(a*a,b/2);
    }
}

int main()
{

int pow = pow(2,3); 
 
    return 0;
}


















