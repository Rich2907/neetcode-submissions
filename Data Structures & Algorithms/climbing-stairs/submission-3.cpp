class Solution {
public:
    int climbStairs(int n) {
        int cur=1;
        int prev=1;
        int prev2=1;
        for(int i=2;i<=n;i++)
        {
            cur=prev+prev2;
            prev2=prev;
            prev=cur;
            // f(n)=f(n-1)+f(n-2);
        }
        return cur;
    }
};
