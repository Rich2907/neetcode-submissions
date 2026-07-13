class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int p=1;
        int pz=1;
        int c=0;
        for(auto k:nums)
        {
            p*=k;

            if(k!=0)
            {
            pz*=k;
            }
            else
            c++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(c>1)
            {
ans.push_back(0);
            }
            else
            {
            if(nums[i]!=0)
            ans.push_back(p/nums[i]);
            else
            ans.push_back(pz);
            }
        }
        return ans;
    }
};
