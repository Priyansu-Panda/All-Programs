#include<iostream>
using namespace std;

#define Max 100

void solve(string str, int index, string result, string ans[],int &ansIndex){

    // base Case
    if (index == str.length()){
        ans[ansIndex] = result;
        ansIndex++;
        return;
    }

    // exclude
    solve(str, index+1, result, ans, ansIndex);
    

    // result = str[index];    // WRONG   Will include a character
    // include
    result += str[index];
    solve(str, index+1, result, ans, ansIndex);
    // solve(str, index+1, result+str[index], ans, ansIndex);

    return;
}


string subset(string str){
    string result = "";
    string ans[Max] = {0};
    int ansIndex = 0;

    solve(str,0,result,ans,ansIndex);

    for (int i = 0; i < ansIndex; i++) {
       cout << ans[i] << endl;
    }
}
 
int main()
{
    string str ="abc";

    subset(str);
 
    return 0;
}




















// #include<iostream>
// using namespace std;

// void solve(string str, int index, string &ans[], string output, int ansIndex, int outI){
//     if(index == str.length()){
//         for(int i = 0; i< outI;i++){
//             ans[ansIndex] = output[i];
//         }
//             ansIndex++;
//     }

//     // Exclude
//     solve(str, index+1, ans,output,ansIndex,outI);

//     char element = str[index];
//     // output[ansIndex] = str[index];
//     output[ansIndex] = element;
//     solve(str,index,ans,output,ansIndex,outI);

// }

// int main()
// {
//     string str = "abc";
//     // int n = str.length();
//     string output = "";
//     string ans[] = {0};
//     int index = 0;

//     solve(str,index,ans,output,0,0);

//     return 0;
// }