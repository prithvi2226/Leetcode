class Solution {
public:

    int firstPosition(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;

        int ans = -1;

        while(low <= high){
            int mid = low +(high - low)/2;

            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }

    int secondPosition(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;

        int ans = -1;

        while(low <= high){
            int mid = low +(high - low)/2;

            if(nums[mid] < target){
                low = mid + 1;
            }
            else if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        std::vector<int> result;


        int ans1 = firstPosition(nums, target);
        result.emplace_back(ans1);
        int ans2 = secondPosition(nums, target);
        result.emplace_back(ans2);

        return result;        
    }
};