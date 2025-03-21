#include<iostream>
#include<string>
using namespace std;

#define Max 100

bool isSafe(int m[][Max], int n, int x, int y, int visit[][Max]){
    if((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visit[x][y] != 1){
        return true;
    }
    return false;
}

void solve(int m[][Max], int n, int visit[][Max], int x, int y, string ans[], int &index, string path){
    // Base Case
    if(x == n-1 && y == n-1){
        ans[index] = path;
        index++;
        return;
    }

    visit[x][y] = 1;
    
    // Down
    int newX = x + 1;
    int newY = y;
    if(isSafe(m, n, newX, newY, visit)){
        solve(m, n, visit, newX, newY, ans, index, path + 'D');
    }
    
    // Left
    newX = x;
    newY = y - 1;
    if(isSafe(m, n, newX, newY, visit)){
        solve(m, n, visit, newX, newY, ans, index, path + 'L');
    }
    
    // Right
    newX = x;
    newY = y + 1;
    if(isSafe(m, n, newX, newY, visit)){
        solve(m, n, visit, newX, newY, ans, index, path + 'R');
    }
    
    // Up
    newX = x - 1;
    newY = y;
    if(isSafe(m, n, newX, newY, visit)){
        solve(m, n, visit, newX, newY, ans, index, path + 'U');
    }

    visit[x][y] = 0;
}

void findPath(int m[][Max], int n, string ans[]){
    int visit[Max][Max] = {0};
    int index = 0;
    string path = "";
    solve(m, n, visit, 0, 0, ans, index, path);


    // sort(ans, ans + index);

    // Implementing Bubble Sort
    for(int i = 0; i < index - 1; i++) {
        for(int j = 0; j < index - i - 1; j++) {
            if(ans[j] > ans[j+1]) {
                // Swap ans[j] and ans[j+1]
                string temp = ans[j];
                ans[j] = ans[j+1];
                ans[j+1] = temp;
            }
        }
    }

    // Printing all paths
    for(int i = 0; i < index; i++){
        cout << ans[i] << endl;
    }
}
 
int main() {
    int n = 6;
    int m[Max][Max] = {{1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}};
    string ans[Max]; // Array to store all paths
    findPath(m, n, ans);

    return 0;
}


















// #include<iostream>
// using namespace std;

// #define Max 100

// bool isSafe(int m[][Max],int n, int x, int y, int visit[][Max]){
//     if((x>=0 && x<n) && (y>= 0 && y< n) && m[x][y] == 1 && visit[x][y] != 1 ){
//         return true;
//     }
//     return false;
// }

// void solve(int m[][Max], int n, int visit[][Max], int x, int y, int ans, string path){
//     // Base CAse
//     if(x == n-1 & y = n-1){
//         cout << path << endl;
//         ans[0] = path;
//         // ans[] = path;
//     }

//     visit[x][y] = 1;
    
//     // down
//     int newX = x+1;
//     int newY = y;

//     if(isSafe(m,n,newX,newY, visit)){
//         path = path + 'D';
//         // wapas wahi steps
//         solve(m,n,visit,newX,newY,ans,path);
//         path = path.pop();
//     }
    
//     // Left
//     int newX = x;
//     int newY = y-1;

//     if(isSafe(m,n,newX,newY, visit)){
//         path = path + 'L';
//         // wapas wahi steps
//         solve(m,n,visit,newX,newY,ans,path);
//         path = path.pop();
//     }
    
//     // Right
//     int newX = x;
//     int newY = y+1;

//     if(isSafe(m,n,newX,newY, visit)){
//         path = path + 'R';
//         // wapas wahi steps
//         solve(m,n,visit,newX,newY,ans,path);
//         path = path.pop();
//     }
    
//     // Up
//     int newX = x-1;
//     int newY = y;

//     if(isSafe(m,n,newX,newY, visit)){
//         path = path + 'U';
//         // wapas wahi steps
//         solve(m,n,visit,newX,newY,ans,path);
//         path = path.pop();
//     }

//     visit[x][y] = 0;
// }


// string findpath(int m[][Max], int n){

//     int ans[Max]; 
//     int srcx = 0;
//     int srcy = 0;

//     string path = "";
//     int visit[n][n] = {0};

//     solve(m,n,visit,srcx,srcy,ans,path);

//     sort(ans[begin], ans[end]);

//     return ans;


// }
 
// int main()
// {
//     int n = 6;
//     int m [n][n] = {{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0}};

//     findpath(m,n);
 
//     return 0;
// }




















// #include<iostream>
// using namespace std;
// #define Max 100



// void solve(int m[][Max] , int n,  string ans[], int visit[][Max], int x, int y, string path ){
    
//     // BAse CAse Pahaunch gaye
//     if(x == n-1 && y == n-1){
//         // ans[ansInd] = path;
//         // ansInd++;

//         // int i = 0;
//         // while (path[i] != '\0'){
//         //     ans[i] = path[i]; 
//         //     i++;
//         // }

//         ans[0] = path;  // ans.push_back(path)
//         return 
//     }
//     // Now we are in move
//     visit[x][y] = 1;

//     // 4 Directions D/r/l/u

//     // Dowm

//     int newX = x+1;
//     int newY = y;
//     if(isSafe(newX, newY,))




//     // if(x+1 < n && visit[x+1][y] == 0){
//     //     solve(m, n, ans, visit, x+1, y, path + "D
//     //     ");
//     //     }
//     //     if(y+1 < n && visit[x][y+1] == 0){
//     //         solve(m, n, ans, visit, x, y+1, path + "R
//     //         ");
//     //         }
//     //         if(x-1 >= 0 && visit[x-1][y] == 0){
//     //             solve(m, n, ans, visit, x-1, y, path + "U 
//     //             ");
//     //             }
//     //             if(y-1 >= 0 && visit[x][y-1] == 0){
//     //                 solve(m, n, ans, visit, x, y-1, path + "L
//     //                 ");
//     //                 }
//     //                 visit[x][y] = 0;



//     visit[x][y] = 0;
// }


// string maze(int m[][Max],int n){

//     string ans[n];
//     int srcx = 0;
//     int srcy = 0; 

//     string path = "";

//     int visit[n][n] = {0};

//     // for(int i= 0; i<n; i++){
//     //     for(int j = 0; j<n; j++){
//     //         visit[i][j] = 0;
//     //     }
//     // }

//     solve(m,n,ans,visit, srcx,srcy, path);

//     sort(ans[0],ans[n-1]);
//     return ans;
// }


// int main()
// {

 
 
//     return 0;
// }