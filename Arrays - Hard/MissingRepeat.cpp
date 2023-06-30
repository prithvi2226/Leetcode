//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        std::sort(arr.begin(), arr.end());
        
        std::vector<int> result;
        
        for(int i = 0; i < n; i ++){
            if(arr[i] == arr[i+1]){
                result.emplace_back(arr[i]);
            }
        } 
        
        std::unordered_set<int> sett;
        
        for(auto i : arr){
            sett.insert(i);
        }
        
        for(int i = 1; i <= n; i ++){
            if(!sett.count(i)){
                result.emplace_back(i);
                break;
            }
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends