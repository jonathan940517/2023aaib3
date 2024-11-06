class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num[2]={};
        for(auto i:bills){
            if(num[0]<0||num[1]<0)return false;
            if(i==5)num[0]++;
            if(i==10){
                num[1]++;
                num[0]--;
            }
            if(i==20){
                if(num[1]>=1){
                    num[1]--;
                    num[0]--;
                }
                else num[0]-=3;
            }
        }
        if(num[0]<0||num[1]<0)return false;
        return true;
    }
};