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
            for(int i=0;i<101;i++)
            a[i]=-1;
        return mic(cost,cost.size());
    }
};
