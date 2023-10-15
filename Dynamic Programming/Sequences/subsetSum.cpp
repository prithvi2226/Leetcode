
int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	int n = arr.size();

	std::vector<std::vector<int>> dp(n, std::vector<int>(k + 1, 0));

	for(int i = 0; i < n; i ++){
		dp[i][0] = 1;
	}

	if(arr[0] <= k){
		dp[0][arr[0]] = 1;
	}

	for(int i = 1; i < n; i++){
		for(int sum = 0; sum <= k; sum ++){
				int not_pick = dp[i - 1][sum];
				int pick = 0;
				if(arr[i] <= sum){
					pick = dp[i - 1][sum - arr[i]];
				}

				dp[i][sum] = pick + not_pick;
		}
	}


	return dp[n-1][k];
}

