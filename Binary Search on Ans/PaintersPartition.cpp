#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

int allocatePaints(vector<int>& nums, int mid, int k){
        long double maxx = 0;
        int painter = 1;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            if((maxx + nums[i]) <= mid){
                maxx += nums[i];    
            }
            else{
                painter ++;
                maxx = nums[i];
            }
        }
        return painter;
    }

int findLargestMinDistance(vector<int> &boards, int k)
{
    
    int low = *std::max_element(boards.begin(), boards.end());
    int high = std::accumulate(boards.begin(), boards.end(), 0);

    int ans = INT_MAX;

    while(low <= high){
        int mid = low + (high - low)/2;

        long double temp = allocatePaints(boards, mid, k);

        if(temp <= k){
            high = mid - 1;
            ans = std::min(mid, ans);
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
    
}

















