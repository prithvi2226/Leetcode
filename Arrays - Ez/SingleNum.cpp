class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();

        std::unordered_map<int, int> mapp;

        for(int i = 0; i < n; i ++){
            mapp[nums[i]] ++;
        }

        for(auto i : mapp){
            if(i.second == 1){
                return i.first;
            }
        }

        return 0;
    }

};

//Optimal

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();

        std::sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i = i + 2){
            if(nums[i] != nums[i-1]){
                return nums[i - 1];
            }
            
        }
        

        return nums[nums.size() - 1];
    }

};
