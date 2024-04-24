#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing Array " << endl;

    //print th earray
    for (int i =0 ; i <size;i++){
        cout << arr[i] << " ";
    }
        cout << "\nPrinting Done " << endl;
}

int main(){
    int second[3] = {5,7,11};
    cout << "VAlue at 2nd inndex "<< second[2] << endl;

    int third[15] = {2,7};
    
    int tsize = sizeof(third)/sizeof(int);
    cout << endl <<"size of third is : " << tsize << endl << endl;

    printArray(third,2);

    int n = 15;

    int fourth[10] = {0};
    n= 10;
    printArray(fourth,10); 


    int fifth[10] = {1};
    printArray(fifth,10); 

    int fsize = sizeof(fifth)/sizeof(int);
    cout << endl <<"size of Fifth is : " << fsize << endl << endl;

    char ch[5] = {'a','b','c','d'};
    for (int i = 0; i<10; i++){   
        cout << ch[i] << " ";
    } 

    double firstD[5];
    float firstF[7];
    bool firstB[9]; 

    cout <<  endl << "Everytthing is fine " << endl << endl;
} 