class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0];
        int pr=0;
        for(int i=0;i<prices.size();i++)
        {
            pr=max(pr,prices[i]-b);
            if(prices[i]<b)
            b=prices[i];
        }
return pr;
    }
};
