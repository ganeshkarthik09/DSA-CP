class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans = z * 2;
        if (x < y) {
            ans += (x * 2);
            ans += ((x + 1) * 2);
        } else if (y < x) {
            ans += (y * 2);
            ans += ((y + 1) * 2);
        }
        else
        {
            ans += ((x+y)*2);
        }
        return ans;
    }
};