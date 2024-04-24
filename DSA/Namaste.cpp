#include<iostream>
using namespace std;

int main (){
/*
    cout <<"NAmaste Dunia "<< endl;  //prints NAmaste Dunia in the
    cout <<"NAmaste Dunia "<< '\n';  //prints NAmaste Dunia in the
    cout <<"NAmaste Dunia ";  //prints NAmaste Dunia in the
    cout <<"NAmaste Dunia \n";  //prints NAmaste Dunia in the
    cout << "\n";
*/

/*
    int a = 23;
    cout << a <<endl;
    // char a = 'n';
    char b = 'n';
    cout << b <<endl;
    bool bl = true;   // true == 1 , false == 0 
    cout << bl <<endl;
    float f = 1.2;
    cout << f <<endl;
    double d = 1.23;
    cout << d <<endl;
    int size = sizeof(a);
    // cout << "Size of a is : "<<a<<endl;
    cout << "Size of a is : "<<size <<endl;
*/

/*
    int a = 'a';
    cout <<"Integer of a is  : "<< a <<endl;
    char ch = 98 ;
    cout <<"Character of 98 is :"<< ch <<endl;

    a = 2/5;
    cout << a <<endl;
    int b = 2.0/5;
    cout << b <<endl;
    cout  << 2.0/5<<endl;

//RElational Operator 

    int a = 2;
    int b = 3 ;

    bool first = (a==b);
    cout <<first<< endl;

    bool second = (a<b) ;
    cout <<second <<endl;
*/

/*
    int n ;
    cin >> n;
    cout << "Value of n is :"<<n<<endl;
*/

/*
    int a , b ;
    cin >> a >> b;
    cout << "Value of a & b is "<<a<<" "<<b<<endl;

    a = cin.get();
    cout<<" VAlue of a is: "<< a << endl;    // cin.get()---> willl take the character value 
*/

/*
    int n ;
    cin >> n;
    int i =1 ;
    int sum = 0;
    while (i <=n){
        sum += i;
        i++;
    }
    cout << "Vaulue of sum is "<< sum << endl;
    
    i = 1;
    sum =0;
    while (i <=n){
       // sum += i;
        i=i+2;
        cout << "Even no.s are :"<< i << " ";
    }
*/

/*
    int n ;
    cin >> n ;

    int i = 2; 

    while (i<n){

        if (n%i ==0){
            cout<< "NOt prime for "<<i << endl; 
        }
        else{
            cout << "Prime for "<< i << endl;
        }
        i++;
    }
*/

/*
    int n ; 
    cin >>n;

    int i = 1;
     while (i<=n){      // no. of rows
        int j = 1;
        // while (j<=i){
        //     cout <<" * ";
        //     j--;
        // }
        while (j<=n ) {   // no. of columns
            cout <<" * ";
            j++;
        }
        cout<<endl;
        i++;
     }
*/


//    int n ; 
//     cin>> n ;
//     int  i = 1;
      
//     while (i<=n){

//         int j = 1;
//         while (j <= n ){
//             cout<< i ;
//             j++;
//         }
//         cout<< "\r\n";
//         i++;
//     }


    // int n;
    // cout<< "Enter the value of n: "<<endl;
    // cin >> n;

    // int i =1 ;
    // while (i<=n){
    //     int j =1 ;
    //     while (j <=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }



    // int n;
    // cout<< "Enter the value of n: "<<endl;
    // cin >> n;

    // int i =1 ;
    // while (i<=n){
    //     int j =1 ;
    //     while (j <=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    
    // int n ;
    // cout<< "ENter no. of rows: "<<endl;
    // cin >> n;
    // int i = 1 ;
    // int count = 1;
    // while (i<=n)
    // {
    //     int j = 1 ;
    //     while ( j<=n){
    //         cout << count  << "   ";
    //         count ++;
    //         j++ ;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    


    // int n ;
    // cout<< "ENter no. of rows: "<<endl;
    // cin >> n;
    // int i = 1 ;
    // int count = 1;
    // while (i<=n)
    // {
    //     int j = 1 ;
    //     while ( j<=i){
    //         cout << count  << "   ";
    //         count ++;
    //         j++ ;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    


    // int n ;
    // cout <<"Enter no. of rows"<<endl;
    // cin>> n;

    // int i =1 ;
    // while (i<=n){
    //     int j = 1;
    //     while (j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
    // }



    // int n ;
    // cout <<"Enter no. of rows"<<endl;
    // cin >> n;
    // int row = 1;
    // while (row<=n){
    //     int col = 1 ;
    //     while (col<=row){
    //         cout << row << " ";
    //         col++;
    //     }
    //     cout<< endl;
    //     row++;
    // }



    // int  n;
    // cout <<"Enter no. of rows"<<endl;
    // cin >> n;
    // int i=1 ;
    // int count =1 ;

    // while (i<= n ){
    //     int j =1 ;
    //     while (j<=i){
    //         cout<<count<<" ";
    //         count++,j++;
    //     }
    //     cout << endl;
    //     i++;
    // }



    // int line;
    // cout<< "Enter No. of rows:  ";
    // cin>>line;

    // int row =1 ;
    // int count =1;
    // while (row<=line ){
    //     int col = 1 ;
    //     while (col<=row){
    //         cout<< count<<" ";
    //         count++, col++;
    //     }
    //     cout<<endl;
    //     row++;
    //     count = row;   // to print the same number in each column
    // }



//     int line;
//     cout<< "Enter No. of rows:  ";
//     cin>>line;

//     int row =1 ;
//    // int count =1;
//     while (row<=line ){
//         int col = 1 ;
//         while (col<=row){
//             cout<< row <<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//         //count = row;   // to print the same number in each column
//     }



// int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j = i;
//         while(j<2*i){
//             cout<<j<<" ";
//             j =j+1;
//         }
//         cout<<endl;
//         i =i+1;
//     }



    
    // int n;
    // cin>>n;

    // int i=1; 
    // while(i<=n){
    // int j = i;
    // while (j>0){
    //     cout<<j<<" ";
    //     j--;
    // }
    // cout<<endl;
    // i++;
    // }



    // int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // while(i<=n){
    //     int j = 1;
    //     while ( j<=n){
    //         char ch = 'A' + i -1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     //ch++;
    //     i++;
    // }



    // int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // while(i<=n){
    //     int j = 1;
    //     while ( j<=n){
    //         char ch = 'A' + j -1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     //ch++;
    //     i++;
    // }



    // int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // char ch = 'A' ;
    // while(i<=n){
    //     int j = 1;
    //     while ( j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    // int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // while(i<=n){
    //     int j = 1;
    //     while ( j<=n){
    //         char ch = 'A'+i+j-2 ;
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    //  int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // while(i<=n){
    //     int j = 1;
    //     while ( j<=i){
    //         char ch = 'A'+i-1 ;
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    // int n;
    // cin>>n;
    // int i=1;
    // //char ch=65;
    // while(i<=n){
    //     int j = 1;
    //     char ch = 'A'+n-i ;
    //     while ( j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    int n;
    cin>>n;
    int i=1;
    //char ch=65;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while ( j<=n){
            cout<<ch<<" ";
            ch+ j +i-2 ;
            j++;
        }
        cout<<endl;
        i++;
        ch++;
    }
}