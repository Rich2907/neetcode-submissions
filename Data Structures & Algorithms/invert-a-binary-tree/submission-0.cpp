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

void sset(TreeNode* r)
{
    if(r==NULL)
    return ;
    TreeNode* temp=r->right;
    r->right=r->left;
    r->left=temp;
    sset(r->left);
    sset(r->right);
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        sset(root);
        return root;
    }
};
