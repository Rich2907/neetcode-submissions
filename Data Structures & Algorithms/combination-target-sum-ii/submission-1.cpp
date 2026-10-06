class Solution {
public:
    vector<vector<int>>ans;
    void print(vector<int>a)
    {
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
       void com(vector<int>& c, int t,int i, vector<int>& a)
       {
        // cout<<t<<" here"<<endl;
        //  print(a);
          if(t==0)
        {
            ans.push_back(a);
           
            return ;
        }
        if(i>=c.size())
        return ;
       
        if(t<0)
        return ;
        a.push_back(c[i]);
        com(c,t-c[i],i+1,a);
        a.pop_back();
        while(i<c.size()-1 && c[i]==c[i+1])
        {
            i++;
        }
        com(c,t,i+1,a);
        return ;
        
      
       }

    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
    vector<int>a;
    sort(c.begin(),c.end());
    com(c,t,0,a);
    return ans;    
    }
};
