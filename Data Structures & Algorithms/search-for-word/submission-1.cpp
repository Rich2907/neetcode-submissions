class Solution {
public:
int n;
int m;
       bool fil(vector<vector<char>>&board, int i,int j,int k,vector<vector<int>>vis,string word)
       {
        cout<<board[i][j]<<" "<<i<<" "<<j<<" "<<word[k-1]<<endl;
        if(i<0 ||i>=n)
        return false;
        if(j<0 ||j>=m)
        return false;
        if(k>=word.size())
        return true;
        bool flag=false;
        
        if(i+1<n && word[k]==board[i+1][j] && vis[i+1][j]==0 )
        {       vis[i+1][j]=1;
                    flag=flag|fil(board, i+1,j,k+1,vis,word);
                    //  cout<<board[i][j]<<" "<<flag<<" "<<i<<" "<<j<<" "<<word[k+1]<<endl;
        vis[i+1][j]=0;
        }
        
        if(i-1>=0 && word[k]==board[i-1][j] && vis[i-1][j]==0 )
        {       vis[i-1][j]=1;
                    flag=flag|fil(board, i-1,j,k+1,vis,word);
                    //  cout<<board[i][j]<<" "<<flag<<" "<<i<<" "<<j<<endl;
        vis[i-1][j]=0;
        }
        
        if(j+1<m && word[k]==board[i][j+1] && vis[i][j+1]==0 )
        {       vis[i][j+1]=1;
                    flag=flag|fil(board, i,j+1,k+1,vis,word);
                    //  cout<<board[i][j]<<" "<<flag<<" "<<i<<" "<<j<<endl;
        vis[i][j+1]=0;
        }
        if(j-1>=0 && word[k]==board[i][j-1] && vis[i][j-1]==0 )
        {       vis[i][j-1]=1;
                    flag=flag|fil(board, i,j-1,k+1,vis,word);
                    //  cout<<board[i][j]<<" "<<flag<<" "<<i<<" "<<j<<endl;
        vis[i][j-1]=0;
        }
        return flag;
       }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        bool flag=0;
        vector<vector<int>>vis;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<m;j++)
            {
                v.push_back(0);
            }
            vis.push_back(v);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            if(word[0]==board[i][j])
            {
                
                vis[i][j]=1;
            flag=flag|| fil(board,i,j,1,vis,word);
            vis[i][j]=0;
            // cout<<board[i][j]<<" "<<flag<<" "<<i<<" "<<j<<endl;
            }
            }
        }        
return flag;
    }
};
