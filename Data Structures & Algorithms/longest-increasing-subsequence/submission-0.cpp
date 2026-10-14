class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>l(nums.size(),1);
        int mmaxi=0;
        for(int i=0;i<nums.size();i++)
        {
            int maxi=0;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    maxi=max(maxi,l[j]);

                }

            }
            
            l[i]=maxi+1;
            mmaxi=max(mmaxi,l[i]);
        }
        // for(auto k:l)
        // cout<<" "<<k;
        // cout<<endl;
        return mmaxi;
    }
};