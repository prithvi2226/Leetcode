class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> tp;
        int largest = 1;
        int n = nums.size();

        if(n == 0){
            return 0;
        }

        for(int i = 0; i < n; i++){
            tp.insert(nums[i]);
        }

        for(auto temp : tp){
            if(tp.find(temp - 1) == tp.end()){
                int x = temp;
                int count = 1;
                while(tp.find(x + 1) != tp.end()){
                    x = x + 1;
                    count ++;
                }
                largest = std::max(count, largest);
            }
        }
        return largest;
    }
};