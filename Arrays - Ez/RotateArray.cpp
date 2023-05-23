class Solution {
public:
//prithvi
    void reverse(vector<int>& nums, int i, int j){

        int left = i;
        int right = j;

        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left ++;
            right --;
        }

    }

    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();

        reverse(nums, 0, nums.size() - k - 1);

        reverse(nums, nums.size() - k, nums.size()-1);

        reverse(nums, 0, nums.size() - 1);
    }
};