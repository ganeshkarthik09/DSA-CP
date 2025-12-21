class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mpp;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            int p=groupSizes[i];
            mpp[p].push_back(i);

            if(mpp[p].size()==p){
                ans.push_back(mpp[p]);
                mpp[p].clear();
            }
        }
        return ans;
    }
};