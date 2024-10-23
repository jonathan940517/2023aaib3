class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dir=0;
        int d[4] = {1,1,-1,-1};
        for(char c:instructions){
            if(c=='G'){
                if(dir%2)x+=d[dir];
                else y+=d[dir];
            }
            if(c=='L')dir = (dir+1)%4;
            if(c=='R')dir = (dir+3)%4;
        }
        if(!x&&!y)return true;
        if(dir==0)return false;
        else return true;
    }
};