class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sorted or not intervals ask interviewer 
        //if sorted,then they are consecutive
        //and then we can compare it easily consecutively linearly
        
        std::sort(intervals.begin(), intervals.end());
        std::vector<std::vector <int>> result;

        int n = intervals.size();

        for(int i = 0; i < n; i++){          
            if(result.empty() || result.back()[1] < intervals[i][0]){
                result.emplace_back(intervals[i]);
            }

            else{
                result.back()[1] = std::max(result.back()[1], intervals[i][1]);
            }
        }

        return result;

    }
};