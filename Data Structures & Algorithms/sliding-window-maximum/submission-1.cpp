class cmp {
public:
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        if (a.first == b.first)
            return a.second > b.second;   // smaller second gets higher priority
        return a.first < b.first;         // larger first gets higher priority
    }
};
class Solution {
public:


  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
priority_queue<pair<int,int>,vector<pair<int,int>>, cmp> pq;
        // priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        int l=0;
        for(int i=k;i<nums.size();i++)
        {
              cout<<i<<" "<<l<<" "<<pq.top().second<<endl;
                while(!pq.empty() && pq.top().second<=l)
                {
                    pq.pop();
                }
                l++;
                pq.push({nums[i],i});
                cout<<pq.top().first<<endl;
                ans.push_back(pq.top().first);
        }
return ans;
    }
};
