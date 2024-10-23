class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>>mp(3,vector<int>(3,0));
        for(int i=0;i<moves.size();i++){
            mp[moves[i][0]][moves[i][1]] = i%2+1;
            for(int j=0;j<3;j++){
                if(mp[j][0]==mp[j][1]&&mp[j][1]==mp[j][2]&&mp[j][0]){
                    return (mp[j][0]==2 ? "B" : "A");
                }else if(mp[0][j]==mp[1][j]&&mp[1][j]==mp[2][j]&&mp[0][j]){
                    return (mp[0][j]==2 ? "B" : "A");
                }else if(mp[0][0]==mp[1][1]&&mp[1][1]==mp[2][2]&&mp[0][0]){
                     return (mp[0][0]==2 ? "B" : "A");
                }else if(mp[0][2]==mp[1][1]&&mp[1][1]==mp[2][0]&&mp[0][2]){
                     return (mp[0][2]==2 ? "B" : "A");
                }
            }
        }
        for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(!mp[i][j])return "Pending";
        return "Draw";
    }
};