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
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL  && q==NULL)
        return true;
        if(p==NULL)
        return false;
        if(q==NULL)
        return false;
        if(p->val!=q->val)
        return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}
bool flag=0;

   bool checkval(TreeNode* root, TreeNode* subRoot)
     {
        if(root==NULL && subRoot== NULL)
        return true;
        if(root==NULL)
        return flag;
        if(root->val==subRoot->val)
        {
            cout<<"r"<<isSameTree(root,subRoot)<<" "<<subRoot->val<<endl;
            if(isSameTree(root,subRoot)== 1)
            flag=1;
        }
        checkval(root->left,subRoot);
        checkval(root->right,subRoot);
return flag;
     }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return checkval(root,subRoot);
    }
};
