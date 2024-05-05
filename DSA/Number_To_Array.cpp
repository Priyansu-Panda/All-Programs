#include<iostream>
using namespace std;

void swap (int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int reverse(int arr[], int n){
    int s = 0; 
    int e = n-1;
    
    while (s<=e){
        swap(arr[s++], arr[e++]);
            // s++, e--;
    }
    return arr;
} 
int splitArr(int num, int arr[]){

    int end = num;
    int i = 0;  
    while(end >= 0){
    // while(i>=0){
        end = num%10;
        arr[i] = end;
        num/=10;
        i++;
    }
    int arr2[i]= reverse(arr,i); 
    return arr2; 

} 
int main()
{
    cout << "Enter the number "<< endl;
    int num;
    cin >> num ;
    int arr[100]= {0};
    int split[] = splitArr(num,arr);
    int size = sizeof (split)/sizeof(split[0]);
    for (int i = 0 ; i<size ; i++){
        cout << split[i]<< ",";
    }
    cout << endl;
    return 0;
}