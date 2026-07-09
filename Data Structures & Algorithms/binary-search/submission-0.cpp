class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(nums[m]==target)
            {
                ans=m;
                break;
            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else
            l=m+1;
        }
        return ans;
    }
};
