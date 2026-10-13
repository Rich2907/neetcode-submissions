class Solution {
public:

    
    int longestCommonSubsequence(string text1, string text2) {
       vector<vector<int>>dp(text1.length()+1,vector<int>(text2.length()+1));
       int n=text1.length();
       int m=text2.length();
       for(int i=0;i<=text1.length();i++)
       {
        dp[i][m]=0;
       }
       for(int j=0;j<=text2.length();j++)
        {
            dp[n][j]=0;
        }

     for(int i=n-1;i>=0;i--)
     {
        for(int j=m-1;j>=0;j--)
        {
            int a=0;
        if(text1[i]==text2[j])
        a=1+dp[i+1][j+1];
        else
        a=max(dp[i+1][j],dp[i][j+1]);
        dp[i][j]=a;
        }
     }
     cout<<n<<" "<<m<<endl;
     for(int i=0;i<=m;i++)
     {
        for(int j=0;j<=n;j++)
        {
            cout<<dp[j][i]<<" ";
        }
        cout<<endl;
     }

 return dp[0][0];

    }
};