class Solution {
public:
int dp[5005][2];
        int f(vector<int>& p, int i,int j)
        {
            if(dp[i][j]!=-1)
            return dp[i][j];
            if(i>=p.size())
            return dp[i][j]=0;
int a=0;
int b=0;
            if(j==0)
            {
            a=-p[i]+f(p,i+1,1);
            b=f(p,i+1,0);
            }

            else
            {
                a=p[i]+f(p,i+2,0);
                b=f(p,i+1,1);
             
            }
           return  dp[i][j]=max(a,b);
        }
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<5005;i++)
        {
            dp[i][0]=-1;
            dp[i][1]=-1;
        }
        return f(prices,0,0);
    }
};
