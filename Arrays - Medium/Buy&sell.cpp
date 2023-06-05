class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int min_so_far = prices[0];
        int n = prices.size();
        int max = 0;

        for(int i = 0; i < n; i++){
            min_so_far = std::min(prices[i], min_so_far);
            int temp_profit = prices[i] - min_so_far;

            max = std::max(temp_profit, max);
        }

        return max;      
        
    }
};