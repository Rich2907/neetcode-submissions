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
int cnt=0;
int fincnt(TreeNode* root,int maxi)
{
 if(root ==NULL)
        return cnt;
        if(maxi<= root->val)
     {  
         cnt++;
        // cout<<cnt<<" "<<root->val<<endl;
        maxi=root->val;
    }
fincnt(root->left,maxi);
fincnt(root->right,maxi);
        return cnt;
}
    int goodNodes(TreeNode* root) {
      return fincnt(root,-1e9);

    }
};
