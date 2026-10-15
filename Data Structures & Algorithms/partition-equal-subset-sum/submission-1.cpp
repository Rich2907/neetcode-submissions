class Solution {
public:
int dp[105][2005];
bool f(vector<int>& nums,int i,int t)
{
    if(dp[i][t]!=-1)
    return dp[i][t];
    if(t==0)
    return dp[i][t]=true;
    if(i>=nums.size())
    return dp[i][t]=false;
    bool flag=false;
    flag=f(nums,i+1,t-nums[i])| f(nums,i+1,t);
return dp[i][t]=flag;

}
    bool canPartition(vector<int>& nums) {
       int s=0;
        for(auto k:nums)
        {
            s+=k;
        }
        for(int i=0;i<=nums.size();i++)
        {
            for(int j=0;j<=s/2;j++)
            {
                dp[i][j]=-1;
            }
        }
        if(s%2!=0)
        return false;
        else
     return f(nums,0,s/2);    
    }

};
