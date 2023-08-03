int people(vector<int>& arr, int mid) {

    int person = 1;
    long long capacity = 0;

    for(int i = 0; i < arr.size(); i++){

        if(arr[i] + capacity <= mid){
            capacity += arr[i];
        }
        else{
            person += 1;
            capacity = arr[i];
        }
    }
    return person;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int low = *std::max_element(arr.begin(), arr.end());
    int high = std::accumulate(arr.begin(), arr.end(), 0);

    if(m > n){
        return -1;
    }

    while(low <= high){

        int mid = (low + high)/2;

        if(people(arr, mid) > m){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        

    }
    return low;
}