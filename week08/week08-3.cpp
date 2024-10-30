class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int N = matrix.size(),M = matrix[0].size();
        vector<int>c(M),r(N);
        for(int i=0;i<N;i++)for(int j=0;j<M;j++)if(!matrix[i][j])c[j]=1,r[i]=1;
        for(int i=0;i<N;i++)if(r[i])for(int j=0;j<M;j++)matrix[i][j]=0;
        for(int i=0;i<M;i++)if(c[i])for(int j=0;j<N;j++)matrix[j][i]=0;
    }
};