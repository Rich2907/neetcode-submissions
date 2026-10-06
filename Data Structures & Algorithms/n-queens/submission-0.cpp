class Solution {
public:
    vector<vector<string>>ans;
    int n;
    vector<pair<int,int>>q;\
     bool pos(int i,int j)
     { 
         for(auto it=q.begin();it!=q.end();it++)
         {
             int ii=it->first;
             int jj=it->second;
             if(i==ii ||j==jj ||abs(i-ii)==abs(j-jj))
                 return false;
         }
         return true;
     }
    
    
    
    
    
    
    
 bool   rec(int i,string s,vector<string>l)
    {
        if(i>=n)
        {
            if(l.size()==n){
                ans.push_back(l);
            return 1;
            }
            return 0;
        }
        for(int j=0;j<n;j++)
        {
            
            if(pos(i,j))
            {
                q.push_back({i,j});
                s[j]='Q';
                l.push_back(s);
                s[j]='.';
                rec(i+1,s,l);
                q.pop_back();
                l.pop_back();
                 }
             }
        return 0;
        
    }
    
    
    
    vector<vector<string>> solveNQueens(int n1) {
    n=n1;
        string s;
        for(int i=0;i<n;i++)
            s+='.';
        vector<string>l;
        rec(0,s,l);
        
        return ans;
    }
};