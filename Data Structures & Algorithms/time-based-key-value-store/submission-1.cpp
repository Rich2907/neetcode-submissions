class TimeMap {
public:
    TimeMap() {
        
    }
    map<string,vector<pair<int,string>>>ma;
    void set(string key, string value, int timestamp) {
        ma[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>>ans=ma[key];
        for(int i=0;i<ans.size();i++)
        {
           cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
auto it=upper_bound(ans.begin(),ans.end(),make_pair(timestamp,"z"));
string a;
if(it!=ans.begin())
{
it--;
a= (it)->second;
}
else
a="";

return a;
        
    }
};
