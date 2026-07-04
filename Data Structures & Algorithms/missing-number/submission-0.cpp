class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        for(auto k:nums)
        {
            s+=k;
        }
        int n=nums.size();
        int ans=n*(n+1)/2;
        return (ans-s);
    }
};
