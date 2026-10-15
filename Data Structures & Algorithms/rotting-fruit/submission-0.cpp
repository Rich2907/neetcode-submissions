class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int tot=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                tot++;
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                
            }
        }
        int rot=0;
        int c=0;
        while(!q.empty())
        {
         int s=q.size();
         
         for(int i=0;i<s;i++)
         {
            pair<int,int> fr=q.front();
            q.pop();
            int ii=fr.first;
            int ij=fr.second;
            if(ii-1>=0 && grid[ii-1][ij]==1 && vis[ii-1][ij]!=1)
            {
                vis[ii-1][ij]=1;
                q.push({ii-1,ij});
            }
            if(ii+1<n && grid[ii+1][ij]==1 && vis[ii+1][ij]!=1)
            {
                vis[ii+1][ij]=1;
                q.push({ii+1,ij});
            }if(ij-1>=0 && grid[ii][ij-1]==1 && vis[ii][ij-1]!=1)
            {
                vis[ii][ij-1]=1;
                q.push({ii,ij-1});
            }if(ij+1<m && grid[ii][ij+1]==1 && vis[ii][ij+1]!=1)
            {
                vis[ii][ij+1]=1;
                q.push({ii,ij+1});
            }

         }
         rot++;
        }
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1 && vis[i][j]!=1)
            return -1;
        }
       }
       if(tot==0)
       return 0;
return rot-1;
    }
};