class Solution {
public:
    int maxx(vector<int>& piles) {
        int n = piles.size();
        int max = INT_MIN;

        for (int i = 0; i < n; i++) {
            max = std::max(max, piles[i]);
        }
        return max;
    }

    long long hourss(vector<int>& piles, int mid) { // Use long long data type for hours
        int n = piles.size();
        long long hours = 0; // Initialize hours to 0 and use long long data type

        for (int i = 0; i < n; i++) {
            hours += ceil(double(piles[i]) / double(mid));
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (hourss(piles, mid) <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
