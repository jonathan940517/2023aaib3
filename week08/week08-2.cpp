class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++)for(int j=0;j<mat[i].size();j++)if((i==j)||i+j==mat[i].size()-1)ans+=mat[i][j];
        return ans;
    }
};