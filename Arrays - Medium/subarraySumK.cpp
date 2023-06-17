class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        std::map<int, int> mapp;
        mapp[0] = 1;
        int prefix_sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i ++){
            prefix_sum += nums[i];

            int remove = prefix_sum - k;
            count += mapp[remove];

            mapp[prefix_sum] += 1;
        }

        return count;
    }
};