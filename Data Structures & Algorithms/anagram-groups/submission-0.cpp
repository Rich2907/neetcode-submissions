class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>a=strs;
        map<string,vector<string>>m;
        vector<vector<string>>ans;
        
        for(int i=0;i<a.size();i++)
        {
            sort(a[i].begin(),a[i].end());
            cout<<a[i]<<" ";
            m[a[i]].push_back(strs[i]);
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }

};
