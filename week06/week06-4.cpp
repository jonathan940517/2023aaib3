class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        vector<int>num;
        for(string c:operations){
            if(c=="D")num.push_back(num[num.size()-1]*2);
            else if(c=="C")num.pop_back();
            else if(c=="+")num.push_back(num[num.size()-1]+num[num.size()-2]);
            else num.push_back(stoi(c));
        }
        for(int i:num)ans+=i;
        return ans;
    }
};