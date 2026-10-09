class Solution {
public:
int a[105];
    int ma(vector<int>&nums,int i)
    {
        if(a[i]!=-1)
        return a[i];
        if(i>=nums.size())
        return 0;
        int x=ma(nums,i+1);
        int y=nums[i]+ma(nums,i+2);
       return a[i]=max(x,y);
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<105;i++)
        a[i]=-1;

        return ma(nums,0);
    }
};