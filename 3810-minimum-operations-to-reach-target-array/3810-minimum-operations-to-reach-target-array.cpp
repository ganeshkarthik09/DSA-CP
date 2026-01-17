class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        auto inputs = make_pair(nums, target);
        unordered_set<int> need;
        for (int i = 0; i < n; ++i) {
            if (nums[i] != target[i]) {
                need.insert(nums[i]);
            }
        }

        return need.size();
    }
};