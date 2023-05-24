class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int sec = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[sec] = nums[i];
                sec++;
            }
        }

        for(int i = sec; i < nums.size(); i++){

            nums[i] = 0;
        }
        
    }
};