class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int n = numRows;
        std::vector<vector<int>> pascal_tri(n);

        for(int i = 0; i < n; i++){
            pascal_tri[i].resize(i+1);

            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    pascal_tri[i][j] = 1;
                }
                else{
                    pascal_tri[i][j] = pascal_tri[i-1][j-1] + pascal_tri[i-1][j];
                }
            }
        }

        return pascal_tri;


    }
};