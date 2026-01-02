class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int x : nums) {
            if (mpp[x] == 1)
                return x;
            mpp[x]++;
        }
        return -1;
    }
};