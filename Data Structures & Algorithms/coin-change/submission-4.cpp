class Solution {
public:
int dp[15][10004];
        int mc(vector<int>& c,int i,int t)
        {
           
            if(i>=c.size())
            return 1e9;
            if(t==0)
             {
                //  cout<<cnt<<" "<<i<<endl;
                return 0;
             }   
             else if(t<0)
             return 1e9;
            if(dp[i][t]!=-1)
            return dp[i][t];
             
         int a=1e9,b=1e9;
         a=1+mc(c,i,t-c[i]);
         b=mc(c,i+1,t);
        //  cout<<a<<" "<<b<<" "<<i<<endl;
        return dp[i][t]= min(a,b);
        }



    int coinChange(vector<int>& coins, int amount) {
       int s=0;
       for(int i=0;i<15;i++)
       {
        for(int j=0;j<10004;j++)
        {
            dp[i][j]=-1;
        }
       }
        if( mc(coins,0,amount)==1e9)
        return -1;
        else
        return mc(coins,0,amount);
    }
};
