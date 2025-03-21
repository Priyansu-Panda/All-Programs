#include<iostream>
using namespace std;


void leftRotate(int arr[], int n, int d){
    // if a array is of 7 size so roatting it 7 times it will be same 
    d = d%n;

    int temp[d];

    for(int i = 0; i<d; i++){
        temp[i] = arr[i];   // so jitno places ko rotate kardiya usko ek array mein rakh diya 
    }
    // baki numberso ko peheel jaga pe rakh diya 
    for(int i = d; i<n; i++){
        // arr[d-i] = arr[i];      // arr[3-3] => arr[0] = arr[3]
        arr[i-d] = arr[i];      // arr[3-3] => arr[0] = arr[3]
    }

    for(int i = (n-d); i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}



int main()
{
    int arr[] = {1,2,34,5,6,87};
    int n = sizeof(arr)/sizeof(arr[1]);
    int temp = arr[0];
    
    cout << "UR Array" <<endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    int i = 1;
    for(; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[i-1]= temp;


    
    cout << endl <<"ROtated array:" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    int t = 20;
    cout <<endl << "For "<< t << " rotations: " << endl;
    t = t%n;    //15%7 = 1 rotation 
    while (t!=0){
        int i = 1;
        temp = arr[0];
        // Array ROtation
        for(;i<n;i++){
            arr[i-1] = arr[i];
        }
        arr[i-1] = temp;

        // Printing Rotated Array
        cout << endl << (4-t) << "th Rotation: "<< endl;
        
        for(int i = 0; i<n;i++){
            cout <<arr[i] << " ";
        }

        t--;
    }

//          OR
    arr[] = {1,2,34,5,6,87};
    n = sizeof(arr)/sizeof(arr[1]);

    // rotations of 15 times
    int d = 15;

    leftRotate(arr,n,d);


    // {1,2,3,4,5,6,7}
    // {3,2,1   7,6,5,4}
    // {4,5,6,7,1,2,3}

    rev(arr,arr+d);
    rev(arr+d,arr+n);
    rev(arr,arr+n);


    return 0;
}



#include<iostream>
using namespace std;
 
int main()
{
    
 
    return 0;
}