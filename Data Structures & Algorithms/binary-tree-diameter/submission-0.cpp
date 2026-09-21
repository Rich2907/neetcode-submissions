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
int maxi=-1e9;
int h(TreeNode* r)
{
    if(r==NULL)
    return 0;
    maxi=max(maxi,h(r->left)+h(r->right));
    return 1+(max(h(r->left),h(r->right)));


}
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=h(root);
        return maxi;
    }
};
