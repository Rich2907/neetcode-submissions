class Solution {
public:
int t;
int dp[21][40005][2];
        int f(vector<int>& nums,int i,int s)
        {
            
            if(i==nums.size())
            {
                // cout<<i<<" "<<s<<" "<<t<<endl;
                if(s==t)
                return 1;
                else
                return 0;
            }
            if(s>=0)
            {if(dp[i][s][0]!=-1)
            return dp[i][s][0];
            }
            else
            {
                if(dp[i][abs(s)][1]!=-1)
                return dp[i][abs(s)][1];
            }


            int ans=0;

            ans+=f(nums,i+1,s+nums[i]);
            ans+=f(nums,i+1,s-nums[i]);
            cout<<i<<" "<<s<<"----- "<<ans<<endl;
            if(s>=0)
            {
            return dp[i][s][0]=ans;
            }
            else
            {
                
                return dp[i][abs(s)][1]=ans;
            }

return ans;        }
    int findTargetSumWays(vector<int>& nums, int target) {
     t=target;
     int s=0;
     for(auto k:nums)
        s+=k;
     int n=nums.size();
    for(int j=0; j<=abs(s); j++)
{
    dp[n][j][0]=0;
    dp[n][j][1]=0;
}

if(target>=0)
    dp[n][target][0]=1;
else
    dp[n][abs(target)][1]=1;
     
       for(int i=n-1;i>=0;i--)
       {
        for(int j=-s;j<=s;j++)
        {
           int ans=0;
           if(j+nums[i]>=0)
            ans+=dp[i+1][j+nums[i]][0];
            else
            ans+=dp[i+1][abs(j+nums[i])][1];
            if(j-nums[i]>=0)
            ans+=dp[i+1][j-nums[i]][0];
            else
            ans+=dp[i+1][abs(j-nums[i])][1];
            // cout<<i<<" "<<s<<"----- "<<ans<<endl;
            if(j>=0)
            {
             dp[i][j][0]=ans;
            }
            else
            {
                
            dp[i][abs(j)][1]=ans;
            }
        }
       }

        return dp[0][0][0];
    }
};