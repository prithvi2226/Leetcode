class Solution {
public:
    int partition(vector<int>& nums, int mid, int k){
        long long sum = 0;
        int parti = 1;

        for(int i = 0; i < nums.size(); i ++){
            if(sum + nums[i] <= mid){
                sum += nums[i];
            }
            else{
                parti ++;
                sum = nums[i];
            }
        }
        return parti;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *std::max_element(nums.begin(), nums.end());
        int high = std::accumulate(nums.begin(), nums.end(), 0);

        int ans = INT_MAX;

        while(low <= high){
            int mid = low + (high - low)/2;
            int parti  = partition(nums, mid, k);

           if(parti < k){
                high = mid -1;
            }
            if(parti > k){
                low = mid + 1;
            }
            else{
                ans = std::min(ans, mid);
                high = mid - 1;
            }
        }

        return ans;
        
    }
};