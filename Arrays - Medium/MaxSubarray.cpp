class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int Max_sum = INT_MIN;

        if(nums.size() == 1){
            return nums[0];
        }

        for(auto i : nums){
            sum+= i;
            Max_sum = std::max(sum, Max_sum);
            if(sum < 0){
                sum = 0;
            }
            
        }
        return Max_sum;
    }
};