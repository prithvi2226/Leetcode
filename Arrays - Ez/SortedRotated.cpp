class Solution {
public:
    bool check(vector<int>& nums) {
        int grtr = 0;
        int smllr = 0;

        int n = nums.size();

        for(int i = 0; i < n-1; i++){
            if(nums[i+1] >= nums[i]){
                grtr ++;
            }
            else{
                smllr++;
            }
        }


        if(grtr == (n-2) && smllr == 1 && nums[n-1] <= nums[0]){
            return true;
        }
        else if(grtr == n-1){

            return true;
        }
        else{
            return false;
        }
    }
};