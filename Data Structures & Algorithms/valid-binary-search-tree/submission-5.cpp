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
 bool check(TreeNode* root, int maxi,int mini)
 {
    if(root ==NULL)
    return true;
    if(root->val<=maxi || root->val>=mini)
    return false;
     if(root->left==NULL && root->right ==NULL)
        return true;
        if(root->left ==NULL)
        {
            if(root->val < root->right->val && root->right->val)
            return ( 1 & check(root->right,max(maxi,root->val),mini));
            return false;
        }
        if(root->right == NULL)
        {
            if(root->left->val < root->val)
            return ( 1 & check(root->left,maxi,min(mini,root->val)));
         return false;
        }
        if(root->left->val < root->val && root->val < root->right->val)
        {
            return ( 1 & check(root->left,maxi,min(mini,root->val)) & check(root->right,max(maxi,root->val),mini));
        }
        return false;

 }
    bool isValidBST(TreeNode* root) {
       
     return check(root,-1e9,1e9);
    }
};
