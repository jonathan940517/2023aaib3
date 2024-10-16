class Solution {
public:
    bool judgeCircle(string moves) {
        int a[2] = {};
        for(char c:moves){
            if(c=='U')a[0]++;
            if(c=='D')a[0]--;
            if(c=='R')a[1]++;
            if(c=='L')a[1]--;
        }
        if(a[0]||a[1])return false;
        else return true;
    }
};