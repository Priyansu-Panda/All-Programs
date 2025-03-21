#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
 
int main()
{
    int arr[] = {0,1,0,2,3,4,0,0,0,5,6,7,9,0};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int c = 0;
    cout << "UR ARRAY" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int p1=0,p2=1;

    for(int i = 0; i<n; i++){
        // if(arr[p1] == 0 && arr[p2] != 0){
        //     swap(arr[p1],arr[p2])
        // }
        if(arr[p1]==0){
            if(arr[p2]!=0){
                swap(arr[p1], arr[p2]);
                p1++, p2++;
            }
            else{
                while(arr[p2] == 0 && p2 < n){     // This would cause p2 to increment continuously until it finds a non-zero element or until p2 reaches the end of the array.
                    p2++;
                }
                // p2++;
            }
        }
        else {  // If arr[p1] is not zero, just increment both pointers
            p1++;
            p2++;
        }


    //     if(arr[p1] == 0){
    //         if(arr[p2] != 0){
    //             swap(arr[p1],arr[p2]);
    //             p1++,p2++;
    //         }
    //         while(p2==0){
    //             p2++;
    //         }
    //     }
    //     else{
    //         p1++,p2++;
    //     }
    }



    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j=i;        // j assinged its position
            break;
        }
    }

    // if(j==-1) return a;

    for(int i = j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }


    
    cout << "New Array" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}