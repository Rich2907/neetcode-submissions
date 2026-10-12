class Solution {
public:
int a[105][105];
int m,n;
 int path(int i,int j)
        {
            if(a[i][j]!=-1)
            return a[i][j];
            if(i==m-1 && j==n-1)
            return 1;
            
            int k=0;
            if(i+1<m )
            k=path(i+1,j);
            if(j+1<n )
            k+=path(i,j+1);
            return a[i][j]=k;
        }
    int uniquePaths(int m1, int n1) {
      m=m1;
      n=n1;
         for(int i=0;i<105;i++)
      {
        for(int j=0;j<105;j++)
        {
            a[i][j]=-1;
        }
      }
 return   path(0,0);
    }
};
