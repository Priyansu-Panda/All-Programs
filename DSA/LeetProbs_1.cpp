/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.
*/

int find(int *arr, int size){
    int ans = 0;

    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans; // Added semicolon
}


/*
For example, let's say we have an array {1, 2, 2, 3, 1}:

Initially, ans is 0.
Iterating through the array:
ans = 0 ^ 1 = 1
ans = 1 ^ 2 = 3
ans = 3 ^ 2 = 1
ans = 1 ^ 3 = 2
ans = 2 ^ 1 = 3
The unique element is 3, so the function returns 3.
*/


//int check(int dupl[];int size)



int duplicate(int arr[], int size){

    int dupl[size],i,j;
    for(int i = 0; i< size;i++){
        for(int j =1; j<size;j++){
            if (arr[i]==arr[j]){
                dupl[i]=arr[i];
            }
        }
    }
     for(int i = 0; i< size;i++){
        for(int j =1; j<size;j++){
            if (dupl[i]==dupl[j]){
                return false;
            }
        }
    }else return true

}





/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
*/

int findDuplicate(vector<int> &arr) 
{

    int ans = 0;

    for (int i =0; i< arr.size();i++){
        ans = ans ^ arr[i];
    }

    for (int i=1; i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
	
}


/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

	for (int i =0; i< n; i++){
		int element = arr1[i];

		for (int j = 0; j<m; j++){

			if (element == arr2[j]){
				ans.push_back(element);
				arr2[j]=-1;
				break;
			}
		}
	}
	return ans;
}


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i =0, j =0 ;
    vector<int> ans;
    while(i<n && j<m){

        if (arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

	for (int i =0; i< n; i++){
		int element = arr1[i];

		for (int j = 0; j<m; j++){

			if (element < arr2[j])
			break;

			if (element == arr2[j]){
				ans.push_back(element);
				arr2[j]=-1;
				break;
			}
		}
	}
	return ans;
}





/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
*/


#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){

   vector< vector<int> > ans;
   
   for(int i =0; i< arr.size();i++){

      for (int j =i+1; j<arr.size();j++){
         
         if (arr[i]+arr[j]== s){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
         }
      }
   }
sort(ans.begin(),ans.end());
return ans;

}








void sortOne(int arr[], int size ){
    int left = 0,  right = n-1;
    int step =0;

    while(left<right) {

        cout<< "Step " << step++ <<endl;
        printArray(arr,n);
        cout<< endl;

        while(arr[left]== 0 && left < right){
            left++;
        }
        while(arr[right]== 1 && left < right){
            right--;
        }

        // if (arr[right]== 1 && arr[left]== 0 ){
        if (left < right ){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        cout<< "returning the sorted array" <<endl;
        printArray(arr,8);
}



void printArray(int arr[], int size){

    for (int i =0; i<size ; i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
}

int main (){
    int arr[8]= {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    cout<< " Printing after function call"<< endl
    printArray(arr,8);
}





int countZero =0;
int countOne=0;
// this is a modified version of the above function which counts the number of zeroes and ones in an array.         
for(int num: arr){
    if (num == 0){
        countZero++;
    }
    // if (num== 1){
    //     countOne++;
    // }
}

for(int num : arr){
     if (num== 1){
        countOne++;
    }
}

for (int i = 0;i<countZero; i++){
    arr[i] = 0;
}

for (int i = countZero; i< countOne+countZero; i++){
    arr[i]=1;
}
