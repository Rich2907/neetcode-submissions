class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lh(n,-1);
        vector<int>rh(n,-1);
    // lh.push_back(-1);
    // rh.push_back(-1);
    int maxi=-1;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(maxi,height[i]);
            lh[i]=maxi;
        }
        maxi=-1;
        for(int j=n-1;j>0;j--)
        {
            maxi=max(maxi,height[j]);
            rh[j-1]=(maxi);
        }
        int s=0;
        for(int i=1;i<=n-2;i++)
        {
            
            int si=min(lh[i],rh[i])-height[i];
            cout<<lh[i]<<" "<<rh[i]<<" "<<height[i]<<" "<<si<<endl;
            if(si>0)
            s+=si;
        }
        return s;
    }
};
