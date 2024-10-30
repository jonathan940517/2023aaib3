class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int tmp=0,x=0,y=0;

        while(ans.size()!=matrix.size()*matrix[0].size()){
            if(matrix[y][x] != -101){
                ans.push_back(matrix[y][x]);
                matrix[y][x] = -101;
            }
            if(tmp%4==0){
                if(x+1>=matrix[0].size()||matrix[y][x+1] == -101)tmp++;
                else x++;
            }
            if(tmp%4==1){
                if(y+1>=matrix.size()||matrix[y+1][x] == -101)tmp++;
                else y++;
            }
            if(tmp%4==2){
                if(x-1<0||matrix[y][x-1] == -101)tmp++;
                else x--;
            }
            if(tmp%4==3){
                if(y-1<0||matrix[y-1][x] == -101)tmp++;
                else y--;
            }
        }
        return ans;
    }
};