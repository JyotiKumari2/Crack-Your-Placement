class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long> prefix(nums.size()), suffix(nums.size());
        int n = nums.size();
        
        prefix[0] = nums[0];
        suffix[n - 1] = nums[n - 1];
        
        for (int i = 1; i < n; ++i) {
            prefix[i] = nums[i] + prefix[i - 1];
            suffix[n - i - 1] = nums[n - i - 1] + suffix[n - i];
        }
        
        for (int i = 0; i < n; ++i) {
            if (i == n - 1) {
                prefix[i] = abs(prefix[i]/(i + 1));
            } else {
                prefix[i] = abs(prefix[i]/(i + 1) - suffix[i + 1]/(n - i - 1));
            }
        }
        
        int min_idx = INT_MAX;
        int min_val = INT_MAX;
        
        for (int i = 0; i < n; ++i) {
            if (prefix[i] < min_val) {
                min_idx = i;
                min_val = prefix[i];
            }
        }
        
        return min_idx;
    }
};