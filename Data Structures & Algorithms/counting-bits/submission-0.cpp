class Solution {
public:
int findcnt(int i)
{
    int c=0;
    while(i>0)
    {
        if(i&1 ==1)
        c++;
        i=i>>1;
    }
    return c;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
           ans.push_back( findcnt(i));
        }
        return ans;
    }
};
