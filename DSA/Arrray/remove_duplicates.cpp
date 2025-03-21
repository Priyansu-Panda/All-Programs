// using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
  // Write your code here.
  int j = 0;
  int i = 0;
  int arr2[n] = {0};
  while (i < n) {
    if (arr[i] != arr[i + 1]) {
      arr2[j] = arr[i];
      j++;
    }
	i++;
  }

  return j;
}