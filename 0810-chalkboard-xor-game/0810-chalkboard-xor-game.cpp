class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            result = result ^ nums[i];
        }
        if (result == 0)
            return true;
        else {
            if (n & 1)
                return false;
            else
                return true;
        }
        return false;
    }
};