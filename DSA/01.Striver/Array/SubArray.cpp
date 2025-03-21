#include<iostream>
using namespace std;

int max(int l, int s){
    if(l>s){
        return l;
    }
    // else
    // {
    //     return s;
    // }
    return s;
}


int SubArray(int a[],int n, int k){
    int left = 0, right = 0;
    int len = -1;
    // int sum = 0;
    int sum = a[0];
    while(right<n){     // right will be within bound
        if(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            len = max(len,(right-left+1));        
            // len = (right-left)+1; 
        }
    // write this in the end 
        right++;
        sum += a[right];
    }
    return len;
}
int main()
{
    int a[] = {6,1,2,3,4,5,7};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 6 ;

    cout << "Max LEn: " <<  SubArray(a,n,k) << endl;
    

    return 0;
}












// #include<iostream>
// using namespace std;
 
// int main()
// {
//     int a[] = {1,2,3,4,5,6};
//     int k = 6 ;

//     for(int i =0; i<6; i++){
//         int s= 0;
//         for(int j = i; j<6; j++){
//             s+= a[j];
//             if(k==s){
//                 cout << "Found "  << j<< endl;
//             }
//         }
//     }
 
//     return 0;
// }













// // #include<iostream>
// // using namespace std;
 
// // int main()
// // {

// //     int a[] = {1,2,3,4,5,6};
// //     int n = sizeof(a)/sizeof(a[0]);
// //     int s= 0;
// //     for(int i =0; i<6; i++){
// //         for(int j = i; j<6; j++){
// //             s= 0; 
// //             for(int k = i; k<j; k++){
// //                 s+= a[k];
// //             }
// //             cout << i << "- i " << j << "- j " <<endl;
// //             cout << s <<  " " ;
// //         }
// //         cout << endl;

// //     }
 
// //     return 0;
// // }