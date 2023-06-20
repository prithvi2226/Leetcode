
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> result;

        int n = nums.size();

        for(int i = 0; i < n; i ++){

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i + 1;
            int k = n-1;

            while(j < k){
                int triple = nums[i] + nums[j] + nums[k];
                if(triple > 0){
                    k --;
                }
                else if(triple < 0){
                    j ++;
                }
                else{
                    std::vector<int> temp = {nums[i], nums[j], nums[k]};
                    result.emplace_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1]){
                        k--;
                    }

                }
            }

        }

        return result;




    }
};