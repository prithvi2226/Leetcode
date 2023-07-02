//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long l, long long mid, long long r) {
        vector<long long> temp;
        long long int count = 0;

        long long left = l;
        long long right = mid + 1;

        while (left <= mid && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                count += (mid - left + 1);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }

        for (long long i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
        return count;
    }

    long long int mergeSort(long long arr[], long long left, long long right) {
        long long int count = 0;

        if (left < right) { // Fix the condition to left < right
            long long mid = (left + right) / 2;
            count += mergeSort(arr, left, mid);
            count += mergeSort(arr, mid + 1, right);

            count += merge(arr, left, mid, right);
        }

        return count;
    }

    long long int inversionCount(long long arr[], long long N) {
        long long left = 0;
        long long right = N - 1;
        long long int cnt = mergeSort(arr, left, right);

        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends