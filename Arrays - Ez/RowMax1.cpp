//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count = 0;
	    int max_count = 0;
	    int row = -1;
	    
	    if(!arr.size()){
	        return -1;
	    }
	    
	    int j = m - 1;
	    
	    for(int i = 0; i < n; i++){
	        
	        while( j >= 0 && arr[i][j] == 1){
	            j--;
	        }
	        if(j < m-1){
	            int count = m - 1 - j;
                if(count > max_count){
                max_count = count;
                row = i;
	       }
	            
	   }
	        
	    
	  }
	    return row;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends