class Solution {
public:
    bool checkStraightLine(vector<vector<int>>&c) {
        double a = c[1][0] - c[0][0],b = c[1][1] - c[0][1];
        double slope;
        if(a==0) slope = INT_MAX;
        else slope = b/a;
        for(int i=1;i<c.size();i++){
            double a = c[i][0] - c[i-1][0],b = c[i][1] - c[i-1][1];
            double tmp;
            if(a==0) tmp = INT_MAX;
            else tmp = b/a;
            if(slope != tmp)return false;
        }
        return true;
    }
};