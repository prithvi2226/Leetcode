class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
    
        int m = triangle.size();
        int n = triangle[0].size();

        std::vector<int> front_row(m, 0);
        std::vector<int> curr_row(m, 0);

        for(int j = 0; j < m; j ++){
            front_row[j] = triangle[m-1][j];
        }

        for(int i = m -2; i >= 0; i --){
            for(int j = i; j >= 0; j --){
                
                int down = triangle[i][j] + front_row[j];
                int down_right = triangle[i][j] + front_row[j + 1];

                curr_row[j] = std::min(down, down_right);

            }

            front_row = curr_row;
        }


        return front_row[0];
    }
};