class Solution {
public:
    int checker(vector<int>& nums, int threshold, int mid){
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            ans += std::ceil(double(nums[i])/double(mid));
        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *std::max_element(nums.begin(), nums.end());

        int ans = INT_MAX;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(checker(nums, threshold, mid) <= threshold){
                ans = std::min(mid, ans);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;

    }
};
