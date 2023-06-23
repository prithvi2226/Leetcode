//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int maxis = 0;
        int sum = 0;
        unordered_map<int, int> mapp;
        
        for(int i = 0; i < n; i++){
            sum += A[i];
            
            if(sum == 0){
                maxis = (i + 1);
            }
            else if(mapp.find(sum) != mapp.end()){
                maxis = std::max(maxis, i - mapp[sum]);
            }
            else{
                mapp[sum] = i;
            }
        }
        
        return maxis;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends