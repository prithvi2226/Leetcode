class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Brute force
        int max = INT_MIN;
        int suffix = 1;
        int prefix = 1;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(prefix == 0){ 
                prefix = 1;
            }
            if(suffix == 0){
                suffix = 1;
            }
            prefix = prefix * nums[i];
            suffix = suffix * nums[n - i - 1];

            max = std::max(max, std::max(prefix, suffix));
        }

        return max;
    }
};