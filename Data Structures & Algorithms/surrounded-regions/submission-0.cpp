class Solution {
public:
    void f(vector<vector<char>>& b,int i,int j,vector<vector<int>>& vis,vector<vector<char>>& c)
    {
      int n = b.size(), m = b[0].size();

        if (i < 0 || i >= n || j < 0 || j >= m)
            return;

        if (vis[i][j] || b[i][j] == 'X')
            return;

        vis[i][j] = 1;
        c[i][j] = 'O';

        f(b, i - 1, j, vis, c);
        f(b, i + 1, j, vis, c);
        f(b, i, j - 1, vis, c);
        f(b, i, j + 1, vis, c);
    } 
    void solve(vector<vector<char>>& b) {
    int n=b.size();
    int m=b[0].size();
    vector<vector<char>>c(n,vector<char>(m,'X'));
vector<vector<int>>vis(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++)
    {        
        int j=0;
            if(b[i][j]=='O')
            {
           
                if(i-1<0 || i+1>=b.size() && vis[i][j]!=1)
                 (f(b,i,j,vis,c));
                if(j-1<0 || j+1>=b[0].size() && vis[i][j]!=1)
                (f(b,i,j,vis,c));
            }
        }
      for(int i=0;i<n;i++)
    {        
        int j=m-1;
            if(b[i][j]=='O')
            {
           
                if(i-1<0 || i+1>=b.size() && vis[i][j]!=1)
                 (f(b,i,j,vis,c));
                if(j-1<0 || j+1>=b[0].size() && vis[i][j]!=1)
                (f(b,i,j,vis,c));
            }
    }
     for(int j=0;j<m;j++)
    {        
        int i=0;
            if(b[i][j]=='O')
            {
           
                if(i-1<0 || i+1>=b.size() && vis[i][j]!=1)
                 (f(b,i,j,vis,c));
                if(j-1<0 || j+1>=b[0].size() && vis[i][j]!=1)
                (f(b,i,j,vis,c));
            }
        }
    for(int j=0;j<m;j++)
    {        
        int i=n-1;
            if(b[i][j]=='O')
            {
           
                if(i-1<0 || i+1>=b.size() && vis[i][j]!=1)
                 (f(b,i,j,vis,c));
                if(j-1<0 || j+1>=b[0].size() && vis[i][j]!=1)
                (f(b,i,j,vis,c));
            }
        }
    
    b=c;
    return ;
    }
};