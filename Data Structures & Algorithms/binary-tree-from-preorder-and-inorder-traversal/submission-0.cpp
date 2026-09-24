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
    void  buill(vector<int>& preorder,vector<int>& inorder,TreeNode* root,int l,int rg,int a)
    {
        if(rg<l)
        return;
        TreeNode* r=new TreeNode(preorder[a]);
        root->left=r;
        for(int i=l;i<=rg;i++)
        {
            if(inorder[i]==preorder[a])
            {
                buill(preorder,inorder,r,l,i-1,a+1);
                builr(preorder,inorder,r,i+1,rg,i-1-l+1+a+1);
                break;
            }}
    }
     void  builr(vector<int>& preorder,vector<int>& inorder,TreeNode* root,int l,int rg,int a)
    {
        if(rg<l)
        return;
        TreeNode* r=new TreeNode(preorder[a]);
        root->right=r;
        for(int i=l;i<=rg;i++)
        {
            if(inorder[i]==preorder[a])
            {
                buill(preorder,inorder,r,l,i-1,a+1);
                builr(preorder,inorder,r,i+1,rg,i-1-l+1+a+1);
                break;
            }}
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* r=new TreeNode(preorder[0]);
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==preorder[0])
            {
                buill(preorder,inorder,r,0,i-1,1);
                builr(preorder,inorder,r,i+1,inorder.size()-1,i-1-0+1+0+1);
                break;
            }
        }
        
        return r;
        
    }
};
