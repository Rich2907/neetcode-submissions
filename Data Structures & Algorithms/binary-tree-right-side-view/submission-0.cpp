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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        if(root!=NULL)
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
            int k=q.size();

            for(int i=0;i<k;i++)
            {
                TreeNode* r=q.front();
                q.pop();

                if(i==k-1)
                ans.push_back(r->val);
                if(r->left!=NULL)
                q.push(r->left);
                if(r->right!=NULL)
                q.push(r->right);
            }

        }
        return ans;
    }

};
