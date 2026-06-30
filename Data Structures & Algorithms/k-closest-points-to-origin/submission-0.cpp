class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<int,vector<int>>>pq;
vector<vector<int>>ans;
        for(int i=0;i<points.size();i++)
        {
            vector<int>l=points[i];
            int x=l[0];
            int y=l[1];
            pq.push({(x*x+y*y),(l)});
            if(pq.size()>k)
            {
                cout<<pq.top().first<<" "<<(pq.top().second)[0]<<(pq.top().second)[1]<<endl;
            pq.pop();
             }}
             while(pq.size()>0)
             {
                 ans.push_back(pq.top().second);
                 pq.pop();
             }
            return ans;
        
    }
};
