class Solution {
public:
int dp[505][505];
 int f(string& w1, string& w2,int i,int j)
 {
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i>=w1.length() && j>=w2.length())
    return 0;
    if(i>=w1.length())
    return ( w2.length()-j);
    if(j>=w2.length())
    return ( w1.length()-i);

    if(w1[i]==w2[j])
    return f(w1,w2,i+1,j+1);
    int a=0;
    a=min(min(1+f(w1,w2,i,j+1),1+f(w1,w2,i+1,j)),1+f(w1,w2,i+1,j+1));
return dp[i][j]=a;
 }
    int minDistance(string w1, string w2) {
        dp[w1.length()][w2.length()]=0;

        for(int i=w1.length()-1;i>=0;i--)
        {
            dp[i][w2.length()]=w1.length()-i;

        } 
         for(int j=w2.length()-1;j>=0;j--)
        {
            dp[w1.length()][j]=w2.length()-j;

        } 
        for(int i=w1.length()-1;i>=0;i--)
        {

        for(int j=w2.length()-1;j>=0;j--)
        {
            
            if(w1[i]==w2[j])
             dp[i][j]=dp[i+1][j+1] ;
    else
    {
        int a=0;
    a=min(min(1+dp[i][j+1],1+dp[i+1][j]),1+dp[i+1][j+1]);
     dp[i][j]=a;
    }
        }    
        }
        return dp[0][0];
    }
};