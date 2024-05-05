// if possible sol ---> then store the value and search to its left
// If no posiible soln the start from its right 

// 0-----------------100
// mid = 50;
//  10|20|30|40
//  no. of student = 3;
// n=1 ; 10+20+30!<50
// n=1 ; 10+20<50

// n = 2; 30+40!<50
// n = 2; 30<50
// n = 2; 40<50

// n = 3; 40<50 

bool isPossible(int arr[], int n, int m, int mid ){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid ){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            // pageSum = 0; pageSum += arr[i];
            // OR
            pageSum = arr[i];
        }
    }
    return true;
}

// a[]->NO. of Pages
// n -> no. of books
// m -> no. of students
int alloc (int n, int m, int a[]){
    int sum =0;
    int s=0;
    for(int i =0 ; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+ (e-s)/2;
    while(s<e){
        if (isPossible(arr,n,m,mid)){
            ans = mid ;
            e = mid -1;     //left part mein aao
        }
        else{
            s = mid + 1;    ///right part mein aao/
        }
        mid = s + (e-s)/2; 
    }
    return ans;
}