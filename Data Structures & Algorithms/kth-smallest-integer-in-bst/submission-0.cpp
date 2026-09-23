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
vector<int>ans;
void co(TreeNode* r)
{
   if(r==NULL)
    return;
        co(r->left);
        ans.push_back(r->val);
        co(r->right);
    
}

    int kthSmallest(TreeNode* root, int k) {
        co(root);
return ans[k-1];
        
    }
};
