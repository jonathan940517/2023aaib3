class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int i = a.size()-1, j = b.size()-1;
        vector<int>ans;
        while(i>=0 || j>=0){
            int now;
            if(j<0)now = a[i] - '0' + carry;
            else if(i<0)now = b[j] - '0' + carry;
            else now = a[i] - '0' + b[j] - '0' + carry;
            ans.push_back(now%2);
            carry = now / 2;
            i--;
            j--;
        }
        if(carry>0)ans.push_back(carry);
        string s;
        reverse(ans.begin(),ans.end());
        for(auto &i:ans)s+=(i+'0');
        return s;
    }
};