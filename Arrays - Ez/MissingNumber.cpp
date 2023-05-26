class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        sum = (n)*(n+1)/2;

        int curr_sum = 0;

        for(int i = 0; i < n; i++){
            curr_sum = curr_sum + nums[i];
        }

        int missing = sum - curr_sum;

        return missing;
    }
};