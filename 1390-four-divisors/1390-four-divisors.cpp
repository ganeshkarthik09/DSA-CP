class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int count = 1;
            if (nums[i] != 1) {
                count = 2;
            }
            int sum = 1;
            if (nums[i] != 1) {
                sum += nums[i];
            }
            for (int j = 2; j <= nums[i] / 2; ++j) {
                if (nums[i] % j == 0) {
                    count++;
                    sum += j;
                }
                if (count > 4) break; 
            }
            if (count != 4)
                continue;   
            else {
                ans += sum;
            }
        }
        return ans;
    }
};