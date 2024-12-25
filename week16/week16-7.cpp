/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        queue<pair<TreeNode*,int>>Queue;
        if(root==nullptr)return ans;
        Queue.push({root,0});
        int mx=0-INT_MAX-1,level=0;
        while(Queue.size()){
            auto [now,l] = Queue.front();
            //cout<<now->val<<" "<<l<<endl;
            Queue.pop();
            if(l>level){
                level++;
                ans.push_back(mx);
                mx=0-INT_MAX-1;
            }
            mx = max(mx,now->val);
            if(now->left!=nullptr)Queue.push({now->left,l+1});
            if(now->right!=nullptr)Queue.push({now->right,l+1});
        }
        ans.push_back(mx);
        return ans;
    }
};