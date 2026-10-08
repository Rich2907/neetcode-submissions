class Solution {
public:
int a[101];

    int mic(vector<int>& cost, int n)
    {
        if(a[n]!=-1)
        return a[n];
        if(n<=1)
        return a[n]=0;

        return a[n]=min(cost[n-1]+mic(cost,n-1),cost[n-2]+mic(cost,n-2));
    }

    int minCostClimbingStairs(vector<int>& cost) {
            int cur=0;
            int prev=0;
            int prev1=0;
            int n=cost.size()-1;
            for(int i=2;i<=cost.size();i++)
            {
             
                cur=min(cost[i-1]+prev,cost[i-2]+prev1);
                prev1=prev;
                prev=cur;
   cout<<i<<" "<<cur<<" "<<prev<<" "<<prev<<endl;
            }
        return cur;
    }
};
