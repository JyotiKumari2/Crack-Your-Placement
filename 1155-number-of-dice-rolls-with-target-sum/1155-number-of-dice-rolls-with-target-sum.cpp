class Solution {
	int m = 1000000007;
public:
	int numRollsToTarget(int d, int f, int target) {
		if (target < d || target > d * f) return 0;
		vector<vector<int>> dp(d + 1, vector<int>(max(f + 1, target + 1)));
		for (int i = 1; i <= f; ++i) 
			dp[1][i] = 1;
		for (int i = 2; i <= d; ++i) {
			for (int s = i; s <= target; ++s) {
				for (int j = i - 1; j < s; ++j) {
					if (dp[1][s - j] == 0 || dp[i - 1][j] == 0)
						continue;
					dp[i][s] = (dp[i][s] + max(dp[i - 1][j], dp[1][s - j])) % m ;
				}
			}
		}
		return dp[d][target];
	}
};