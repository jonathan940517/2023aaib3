class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto i:accounts){
            int tmp=0;
            for(auto j:i){
                tmp+=j;
            }
            ans = max(ans,tmp);
        }
        return ans;
    }
};