class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
 //
        int current_count = 0;
        int max_count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                current_count++;
            }
            
            else{
                if(current_count > max_count){
                    max_count = current_count;
                }
                current_count = 0;
            }
        }
        if(current_count > max_count){
            max_count = current_count;
            }


        return max_count;
    }
};