class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center,
                          int radius) {
        int n = towers.size();
        vector<vector<int>> reachable;
        for (int i = 0; i < n; ++i) {
            if ((abs(towers[i][0] - center[0]) +
                 abs(towers[i][1] - center[1])) <= radius) {
                reachable.push_back(towers[i]);
            }
        }
        int p = reachable.size();
        if (p == 0)
            return {-1, -1};
        int ans = INT_MIN;
        vector<int> cord{-1, -1};
        for (int i = 0; i < p; ++i) {
            if (reachable[i][2] > ans) {
                ans = reachable[i][2];
                cord[0] = reachable[i][0];
                cord[1] = reachable[i][1];
            } else if (reachable[i][2] == ans) {
                if(reachable[i][0] < cord[0] || (reachable[i][0] == cord[0] && reachable[i][1] < cord[1]))
                {
                    cord[0]= reachable[i][0];
                    cord[1]= reachable[i][1];
                }
            }
        }
        return cord;
    }
};