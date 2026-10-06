class Solution {
public:
    vector<vector<int>>ans;
    void prmt(vector<int>& n,int i,vector<int>& a,vector<int>& vis)
    {
        if(i>=n.size())
        {
            ans.push_back(a);
            return ;
        }
        for(int j=0;j<n.size();j++)
        {
            if(vis[j]==0)
            {
                a[i]=n[j];
                vis[j]=1;
                prmt(n,i+1,a,vis);
                a[i]=0;
                vis[j]=0;
            }

        }
        return ;

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>a(nums.size(),0);
        vector<int>vis(nums.size(),0);
        prmt(nums,0,a,vis);
        return ans;
    }
};
