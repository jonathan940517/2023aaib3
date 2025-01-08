class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>a,b;
        a = nums;
        b = nums;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        return a==nums || b==nums;
    }
};