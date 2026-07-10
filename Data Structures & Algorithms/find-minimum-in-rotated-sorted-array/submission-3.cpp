class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0,h=nums.size()-1;
        int ans=nums[0];
        while(l<=h)
        {
            if(nums[l]<nums[h])
            {
                ans=min(ans,nums[l]);
            }
            int m=(l+h)/2;
            ans=min(ans,nums[m]);
            if(nums[l]<=nums[m])
            {
                l=m+1;
            }
            else
            h=m-1;

        }
        return ans;
    }
};
