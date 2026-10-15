class Solution {
public:
     int f(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& vis)
     {
         if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
        return 0;
        vis[i][j]=1;
        int a=1;
        if(i-1 >=0 && grid[i-1][j]==1 && vis[i-1][j]!=1)
       a+= f(grid,i-1,j,vis);
        if(j-1 >=0 && grid[i][j-1]==1 && vis[i][j-1]!=1 )
        a+=f(grid,i,j-1,vis);
        if(i+1<grid.size() && grid[i+1][j]==1&& vis[i+1][j]!=1 )
        a+=f(grid,i+1,j,vis);
        if(j+1<grid[0].size() && grid[i][j+1]==1 && vis[i][j+1]!=1)
        a+=f(grid,i,j+1,vis);
        return a ;

     }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
        int a=0;
        int maxi=-1e9;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1 && vis[i][j]!=1)
                a=f(grid,i,j,vis);
                maxi=max(maxi,a);
            }
        }
        return maxi;
    }
};
