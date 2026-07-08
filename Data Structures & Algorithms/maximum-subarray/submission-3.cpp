class Solution {
public:
    int maxSubArray(vector<int>& nums) {

int s=0;
int maxs=-1e9;
for(int i=0;i<nums.size();i++)
{
    if(s<0)
    {
        s=0;
    }
    s+=nums[i];
    maxs=max(maxs,s);
}
return maxs;
    }
};
