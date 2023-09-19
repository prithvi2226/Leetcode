class Solution {
public:
    int PathSum(int min_sum, vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){

        if(m == 0 && n == 0){
            return dp[m][n] = grid[0][0];
        }

        if(m < 0 || n < 0){
            return 99999;
        }

        if(dp[m][n] != -1){
            return dp[m][n];
        }


        int up = PathSum(min_sum , grid, m -1, n, dp);
        int left = PathSum(min_sum , grid, m, n - 1, dp);


        min_sum = std::min(up, left);

        return dp[m][n] = min_sum + grid[m][n];
        //return dp[x][y]

    }

    int minPathSum(vector<vector<int>>& grid) {
        int min_sum = 0;

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));



        return PathSum(min_sum, grid, m-1, n-1, dp);
    }
};