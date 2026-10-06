/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

         string serial(TreeNode* root)
         {
            string s;
            if(root==NULL)
            return "#,";
             s=to_string(root->val)+",";
             s+=serial(root->left);
             s+=serial(root->right); 
             return s;  
         }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       string s="";
       s=serial (root);
    //    cout<<s<<" "<<endl;
        return s;
    }
    TreeNode* deserial(vector<string>& a,int& i)
    {
        if(i>=a.size())
        return NULL;
        // cout<<a[i]<<" oo"<<endl;
        if(a[i]=="#")
        return NULL;
        TreeNode* root=new TreeNode(stoi(a[i]));
        i++;
        root->left=deserial(a,i);
        i++;
        root->right=deserial(a,i);
        return root;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string s) {
        vector<string>a;
        string neww="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==',')
            {
                a.push_back(neww);
                neww="";
            }
            else
            {
                neww+=s[i];
            }
        }
        // for(auto y:a)
        // cout<<y<<" ";
        // cout<<endl;
        int i=0;
      return  deserial(a,i);
        // return NULL;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));