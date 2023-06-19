class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int element_1 = INT_MIN;
        int element_2 = INT_MIN;
        int count_1 = 0;
        int count_2 = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(element_1 == nums[i]){
                count_1 ++;
            }
            else if(element_2 == nums[i]){
                count_2++;
            }
            else if(count_1 == 0 && element_2 != nums[i]){
                count_1 = 1;
                element_1 = nums[i];
            }
            else if(count_2 == 0 && element_1 != nums[i]){
                count_2 = 1;
                element_2 = nums[i];
            }
            else{
                count_1 --;
                count_2 --;
            }
        }


        std::vector<int> res;

        count_1 = 0;
        count_2 = 0;

        int m = n/3 + 1;

        for(int i = 0; i < n; i++){
            if(element_1 == nums[i]){
                count_1++;
            }
            if(element_2 == nums[i]){
                count_2++;
            }
        }

        if(count_1 >= m){
            res.emplace_back(element_1);
        }
        
        if(count_2 >= m){
            res.emplace_back(element_2);
        }

        std::sort(res.begin(), res.end());


        return res;
        
    }
};