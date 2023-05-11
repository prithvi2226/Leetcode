//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long n = 1;
    long long sum = 0;

    long long sumOfSeries(long long N) {
        // code here
        if(n == N+1){
            
            return sum;
        }
        sum += n*n*n;
        
        n++;
        
        sumOfSeries(N);
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends