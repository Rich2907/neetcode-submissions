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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)
        return {};
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty())
        {
                int k=q.size();
                vector<int>v;
            for(int i=0;i<k;i++)
            {
                TreeNode* r=q.front();
                v.push_back(r->val);
                q.pop();
                if(r->left!=NULL)
                q.push(r->left);
                if(r->right!=NULL)
                q.push(r->right);
                
            }
            ans.push_back(v);
        }
        return ans;

    }
};
