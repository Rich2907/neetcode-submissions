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
int  maxPathSu(TreeNode* root)
{
    if(root ==NULL)
        return 0;
       int ls=maxPathSu(root->left);
       int rs=maxPathSu(root->right);
       maxi=max(maxi,ls+rs+root->val);
    // cout<
       
    //   cout<<maxi<<" "<<ls+rs+root->val<<endl;
      int k=max(max(ls,rs),0);
      maxi=max(maxi,k+root->val);
      return k+root->val;
}
    int maxPathSum(TreeNode* root) {
        maxPathSu(root);
        return maxi;
    }
};
