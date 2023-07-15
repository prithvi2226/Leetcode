
int elementsLower(vector<int> &arr, int n, int x){
	int low = 0;
	int high = arr.size() - 1;

	int pos = 0;

	while(low <= high){

		int mid = low + (high - low)/2;

		if(arr[mid] == x){
			pos = mid;
			high = mid - 1;
		}
		else if(arr[mid] > x){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}

	}
	return pos;

	
}

int elementsUpper(vector<int> &arr, int n, int x){
	int low = 0;
	int high = arr.size() - 1;

	int pos = 0;

	while(low <= high){

		int mid = low + (high - low)/2;

		if(arr[mid] == x){
			pos = mid;
			low = mid + 1;
		}
		else if(arr[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
		
		
	}
	return pos;
	
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int count_1;
	int count_2;

	count_1 = elementsLower(arr, n, x);
	count_2 = elementsUpper(arr, n, x);

	if(count_1 == 0 && count_2 == 0){
		return 0;
	}

	int res = count_2 - count_1 + 1;

	return res;
}
