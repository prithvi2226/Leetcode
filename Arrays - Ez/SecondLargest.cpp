//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max = 0;
	    int sec_max = -1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[max]){
                max = i;
            }
        }
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] > arr[sec_max] && arr[i] != arr[max]){
                sec_max = i;
            }
        }
        
        if(sec_max == -1){
            return -1;
        }
        
        return arr[sec_max];
        
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends