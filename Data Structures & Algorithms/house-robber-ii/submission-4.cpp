class Solution {
public:
int dp[105][2];
    int rob(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        if(nums.size()==1)
        return nums[0];
        dp[nums.size()-1][1]=0;
        dp[nums.size()-1][0]=nums[nums.size()-1];
        cout<<"h"<<dp[nums.size()-1][0]<<endl;
        // int p=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            for(int p=0;p<=1;p++)
            {
                int x=0;
                int y=0;
                cout<<x<<endl;
                if(i+1<nums.size())
                x=dp[i+1][p];
                cout<<"cjecl"<<x<<endl;
                if(i+2<nums.size())
                 y=dp[i+2][p];
                if(i!=0 )
                y+=nums[i];
                else if(p==1 && i==0)
                y+=nums[i];
            dp[i][p]=max(x,y);
            // cout<<i<<" "<<p<<" "<<x<<" "<<y<<" "<<dp[i][p]<<endl;
            }}
      return  max(dp[0][0],dp[0][1]);

    }
};