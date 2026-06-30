class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto k:stones)
        {
            pq.push(k);
        }
        while(pq.size()>1)
        {
            int x=pq.top();
         cout<<x<<endl;
            pq.pop();
            int y=pq.top();
            pq.pop();
            cout<<y<<endl;
            if(x>y)
            {
                pq.push(x-y);
            }
            else
            pq.push(0);


        }
        return pq.top();
    }
};
