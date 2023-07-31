class Solution {
public:
    int numOfDays(vector<int>& weights, int mid){
        int ans = 0;
        int days = 1;

        int n = weights.size();

        for(int i = 0; i < n; i++){

            if(ans + weights[i] > mid){
                days += 1;
                ans = weights[i];
            }
            else{
               ans += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *std::max_element(weights.begin(), weights.end());
        int high = std::accumulate(weights.begin(), weights.end(), 0);

        int ans = INT_MAX;

        while(low <= high){

            int mid = low + (high - low)/2;

            int dayys = numOfDays(weights, mid);

            if(dayys <= days){
                high = mid - 1;
                ans = std::min(mid, ans);
            }
            else{
                low = mid + 1;
            }

        }
        return ans;
    }
};









