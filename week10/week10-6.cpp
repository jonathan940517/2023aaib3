class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int t:nums){
            if(t==0)return 0;
            if(t<0) ans*=-1;
        }
        return ans;
    }
};