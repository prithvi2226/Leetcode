class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        if(nums.size() == 1){
            std::cout << 1  << std::endl;
        }

        int second = 0;


        for (int i = 0; i < nums.size(); ++i)
        {
            /* code */
            if(nums[i] != 0){
                nums[second] = nums[i];
                second ++;
            }
        }

        for (int i = second; i < nums.size(); i++)
        {
            /* code */
            nums[i] = 0;
        }

    }
};