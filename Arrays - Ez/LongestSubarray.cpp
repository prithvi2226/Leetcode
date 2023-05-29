//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int sum = 0;
        int max_len = 0;
        
        std::map<int, int> mapp;
        
        for(int i = 0; i < N; i ++){
            
            sum = sum + A[i];
            
            if(sum == K){
                max_len = std::max(max_len, i+1);
            }
            int rem = sum - K;
            if(mapp.find(rem) != mapp.end()){
                int len = i - mapp[rem];
                max_len = std::max(len, max_len);
            }
            
            if(mapp.find(sum) == mapp.end()){
                mapp[sum] = i;
            }
        }
        
        return max_len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends