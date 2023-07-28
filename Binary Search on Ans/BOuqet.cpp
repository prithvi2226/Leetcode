class Solution {
public:
    int bouqets(vector<int>& bloomDay, int mid, int k) {
        int count = 0;
        int bouquets = 0;
        int n = bloomDay.size();

        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = 1LL* m * k* 1LL;
        if (n < val) {
            return -1;
        }

        int low = *std::min_element(bloomDay.begin(), bloomDay.end());
        int high = *std::max_element(bloomDay.begin(), bloomDay.end());

        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (bouqets(bloomDay, mid, k) >= m) {
                ans = std::min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
