class Solution {
   public:
    long long subArrayRanges(vector<int> &nums) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int low = nums[i], high = nums[i];
            for (int j = i + 1; j < n; ++j) {
                low = min(low, nums[j]);
                high = max(high, nums[j]);
                ans = ans + (high - low);
            }
        }
        return ans;
    }
};
