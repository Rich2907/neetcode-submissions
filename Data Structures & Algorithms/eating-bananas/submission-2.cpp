class Solution {
public:
 bool conditionvalid(int m, vector<int>& piles,int h)
 {
    int c=0;
    for(int i=0;i<piles.size();i++)
    {
        if(m>=piles[i])
        c++;
        else
        {
        c+=(piles[i]/m);
        if(piles[i]%m >0)
        c++;
        }
    }
    if(c<=h)
    return true;
    else
    return false;
 }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxi=-1e9;
        for(auto nums:piles)
        {
            maxi=max(maxi,nums);
        }
        int hi=maxi;
        int l=1;
        int ans=-1;
        while(l<=hi)
        {
            int m=hi-((hi-l)/2);
            if(conditionvalid(m,piles,h))
            {
                ans=m;
                hi=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};
