#include<iostream>
using namespace std;

#define Max 100


int solve(int num[], int n,int index, int output[], int oI, int ans[][Max], int &aI){

// Base CAse
    // if(index >= sizeof(num)){
    if(index >= n){
        for(int i = 0; i < oI; i++){
            ans[aI][i]  = output [i];
        }
        aI++;
        return; 
    }

    // exclude
    solve(num,n,index+1,output,oI,ans,aI);

    // include
    output[oI] = num[index];
    solve(num,n,index+1,output,oI+1,ans,aI);
}

int subset(int num[]){
    int ans[Max][Max];
    int output[Max];
    int index = 0;
    int ansIndex = 0;
    solve(num,3,index, output,0, ans, ansIndex);


    for(int i = 0; i<ansIndex; i++){
        for(int j = 0; j<Max; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}
 
int main()
{
    int num[3] = {1,2,3};
    subset(num);
 
 
    return 0;
}



/*
#include <iostream>

#define Max 10

void generateSubsets(int num[], int n, int ans[][Max], int &aI) {
    // Start with an empty subset
    ans[aI][0] = 0; // Mark the end of this subset (since it's empty)
    aI++;

    // Iterate over each element in the input array
    for (int i = 0; i < n; i++) {
        int currentSubsetCount = aI; // Number of subsets generated so far

        // Add the current element to all existing subsets
        for (int j = 0; j < currentSubsetCount; j++) {
            int k = 0;
            // Copy the current subset
            while (ans[j][k] != 0) {
                ans[aI][k] = ans[j][k];
                k++;
            }

            // Add the current element to the copied subset
            ans[aI][k] = num[i];
            k++;
            ans[aI][k] = 0; // Mark the end of this new subset

            aI++;
        }
    }
}

int main() {
    int num[] = {1, 2};
    int n = sizeof(num) / sizeof(num[0]);
    int ans[Max][Max] = {0}; // Initialize with zeros
    int aI = 0; // To keep track of the number of subsets generated

    generateSubsets(num, n, ans, aI);

    // Print all the subsets
    for (int i = 0; i < aI; i++) {
        std::cout << "{ ";
        for (int j = 0; ans[i][j] != 0 && j < n; j++) {
            std::cout << ans[i][j] << " ";
        }
        std::cout << "}" << std::endl;
    }

    return 0;
}
*/

















// #include<iostream>
// using namespace std;

// #define MAX 100


// void solve(int *num, int n,int index, int output[], int output_index, int ans[MAX][MAX], int *ans_index){

//     // BASE CASE
//     if(index > n){
//         for(int i = 0; i < output_index ; i++){
//             cout<<output[i]<<" ";
//             ans[*ans_index][i] = output[i];
//         }
//         return;
//     }

//     solve(num, n, index+1, output,output_index,ans,ans_index);
//     output[output_index] = num[index];

//     solve(num, n, index+1, output, output_index+1, ans, ans_index);
// }

// void subset(int *num, int n){

//     int output[MAX] ={0};   // to store current subset
//     int ans[MAX][MAX] = {0};    // to store subsets
//     int ans_index = 0;

//     solve(num,n,0,output,0,ans,&ans_index);
// }
 
// int main()
// {
//     int num[] = {1,2,3};

//     int n = sizeof(num)/ sizeof(num[0]);
    
//     subset(num,n);
//     return 0;
// }













































// #include<iostream>
// using namespace std;

// int  solve(int num[], int output[], int index, int &ans[2][3]){
//     if (index > (sizeof(num)/sizeof(num[0]))){
//         ans.push_back(output);
//         return ;
//     }

//     // exclude
//     solve(num,output,index+1,ans);

//     // include
//     int element = num[index];
//     output.push_back(element);
//     solve((num,output,index+1,ans));

//     // output[index] = num[index];
//     // solve(num,output,index+1,ans);

// }
 
// int main()
// {
//     int num[] = {1,2,3};
//     int ans[2][3] = {{1,2,3},{0}};
//     int output[] ={};

//     int index = 0;

//     solve(num,output,index,ans);









//     return 0;
// }








