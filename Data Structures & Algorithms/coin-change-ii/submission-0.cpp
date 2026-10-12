class Solution {
public:
int t;
long long dp[301][5005];
            int mc(vector<int>& c,int i,int s)
            {
                
                if(s==t)
                return 1;
                if(s>t)
                return 0;
                if(dp[i][s]!=-1)
                return dp[i][s];
                int ans=0;
                ans=mc(c,i,s+c[i]);
                if(i+1<c.size())
                ans+=mc(c,i+1,s);
                return dp[i][s]=ans;
            }
    int change(int amount, vector<int>& c) {
        t=amount;
        for(int i=0;i<c.size();i++)
        {
             dp[i][amount]=1;
        }
        
            for(int i=c.size()-1;i>=0;i--)
        {
            for(int j=t-1;j>=0;j--)
            {

                int ans=0;
                if(j+c[i]<=t)
                ans=dp[i][j+c[i]];
                if(i+1<c.size())
                ans+=dp[i+1][j];
                 dp[i][j]=ans;
            }
        }
    
        return dp[0][0];
    }
};