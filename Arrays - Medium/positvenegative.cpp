class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //prithvi sol
        int positive = 0;
        int negative = 1;
        std::vector<int> result(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0){
                result[positive] = nums[i];
                positive += 2;
            }
            else{
                result[negative] = nums[i];
                negative += 2;
            }

        }

        return result;
    }
};