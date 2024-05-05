#include<iostream>
using namespace std;

int reverse(int arr){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    return arr;
}

int arrSum(int arr){
    int i = n-1;
    int j = m-1;
    int ans[];
    int carry=0;

    while(i>=0 && j>=0){
        int val1 =arr1[i];
        int val2 =arr2[j];
        int sum = val1+ val2 + carry;

        carry= sum/10;
        sum = sum%10;
        ans.push(sum);    //Nedd to know
        i--;
        j--;
    }

    // first case
    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum= sum%10;
        ans.push(sum);
        i--;
    }
    // second case
    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum= sum%10;
        ans.push(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum= sum%10;

    }

    // print ans;
    return reverse(ans);

}

int main()
{
 
 
    return 0;
}