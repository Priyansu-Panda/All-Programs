#include<iostream>
using namespace std;

int f1(int arr[], int n, int x){

    int l = 0, h = n-1, mid = 0;
    int f = -1;

    while(l <= h){
        mid = l + (h - l)/2;
        if(arr[mid] == x){
            f = mid;
            h = mid - 1;
        }
        else if (arr[mid] < x){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return f;
}

int l1(int arr[], int n, int x){
    int l = 0, h = n-1, mid = 0;
    int l1 = -1;
    while(l <= h){
        mid = l + (h - l)/2;
        if(arr[mid] == x){
            l1 = mid;
            l = mid + 1;
        }
        else if(arr[mid] > x){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return l1;
}


int fl3(int arr[], int n, int x){
    int f = f1(arr,n,x);
    int l = l1(arr,n,x);
    if(f != -1 && l != -1){
        cout <<"FIRST: "<<f << '\t'<< "LAST: " << l << endl;
        return f-l-1;
    }
    else{
        return 0;
    }
}


// int fl2(int arr[], int n, int x){
//     int i = 0, j = n-1, ci=0, cj = 0;
//     while(i<=j){
//         if(arr[i] == x){
//             ci = i;
//             break;
//             }
//             i++;
//             }
//             while(j>=i){
//                 if(arr[j] == x){
//                     cj = j;
//                     break;
//                     }
//                     j--;
//                     }
//                     return ci + cj;
//                     }
//     }        

// }

int fl2(int arr[], int n, int x){
    int i = 0, j = n-1,f = -1, l = -1, ci=0, cj = 0;
    while(i<=j){
        if(arr[i] == x  && ci<1){
            f = i;
            ci++;
        }
        if(arr[j] == x && cj<1){
            l = j;
            cj++;
        }
        i++;
        j--;
    }
    cout <<"FIRST: "<<f << '\t'<< "LAST: " << l << endl;
    return ci+cj;

}

int fl(int arr[], int n, int x){
    int f = -1 , l = -1, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]==x && cnt < 1){
            f = i;
            l = i;
            cnt++;
        }
        if(arr[i] == x && cnt >= 1){
            l = i;
            cnt++;
        }
    }
    cout <<"FIRST: "<<f << '\t'<< "LAST: " << l << endl;
    return cnt;
}
 
int main()
{
    int arr[] = {2,4,6,8,8,8,11,9,8,8,12};
    int n = (sizeof(arr)/sizeof(arr[0]));

    // fl(arr,n, 8);

    // fl2(arr,n,8);

    fl3(arr,n,8);
 
    return 0;
}