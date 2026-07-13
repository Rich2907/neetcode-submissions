class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>m;
      for(auto k:nums)
      {
        m[k]++;
      }  
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
int c=0;
vector<int>ans;
vector<pair<int,int>>a;
for(auto it=m.begin();it!=m.end();it++)
{
    a.push_back({it->second,it->first});

}
sort(a.begin(),a.end(),greater<>());
for(int i=0;i<a.size();i++)
{

    c++;
    if(c<=k)
    ans.push_back(a[i].second);
    else
    break;
cout<<c<<" "<<a[i].first<<" "<<a[i].second<<endl;
}
return ans;
    }
};
