class Solution {
public:
int dp[105][2];
int check(vector<int>& nums, int i,int p)
{

    if(i>=nums.size())
    return 0;
 
    if(dp[i][p]!=-1)
    return dp[i][p];

    int x=check(nums,i+1,p);
     int y=0;
    // cout<<i<<" "<<x<<" "<<y<<" "<<p<<endl;
   
    if(i==0)
    y+=nums[i]+check(nums,i+2,1);
    else if(i==nums.size()-1 && p==1)
    ;
    else
    y+=nums[i]+check(nums,i+2,p);
    // cout<<i<<" "<<x<<" "<<y<<" "<<p<<" "<<max(x,y)<<endl;
return dp[i][p]=max(x,y);
    
}
    int rob(vector<int>& nums) {
        for(int i=0;i<105;i++)
        {
            dp[i][0]=-1;
            dp[i][1]=-1;
        }
      return   check(nums,0,0);

    }
};