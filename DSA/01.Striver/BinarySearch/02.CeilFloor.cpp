

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low = 0, high = n-1, mid;
	int c = 0, f = -1;

	while(low<= high){
		mid = low + (high - low)/2;

		if(x==a[mid]){
			c= mid;
			f = mid;
		}
		else if(x>a[mid]){
			f = mid;
			low = mid + 1;
		}
		else{
			c = mid;
			high = mid -1;
		}
	}
	/*
	if(mid<0){
		f = -1, c = 0;
		return {-1,a[c]};
	}else if(mid > n){
		return {a[mid],a[mid]};
	}
	else{
		return {a[f],a[c]};
	}
	*/
	return {a[f],a[c]};
}