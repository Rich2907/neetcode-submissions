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
int flag=0;

int h(TreeNode* root)
{
    if(root==NULL)
    return 0;
   cout<<abs(h(root->left)-h(root->right))<<" "<<root->val<<endl;
    if(abs(h(root->left)-h(root->right))>1)
    flag=1;
    return 1+max(h(root->left),h(root->right));
}
    bool isBalanced(TreeNode* root) {
int k= h(root);
        if(flag==1)
        return false;
        else
        return true;
    }
};
