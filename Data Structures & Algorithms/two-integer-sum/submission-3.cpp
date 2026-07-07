class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>>m;
         for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        vector<int>ans;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
            
                ans.push_back(m[nums[l]][0]);
                if(nums[l]==nums[r])
                ans.push_back(m[nums[r]][1]);
                else
                ans.push_back(m[nums[r]][0]);
                break;
            }
            else if(nums[l]+nums[r]>target)
            {
                r--;
            }
            else
            l++;
        }
    sort(ans.begin(),ans.end());
    return ans;}

};
