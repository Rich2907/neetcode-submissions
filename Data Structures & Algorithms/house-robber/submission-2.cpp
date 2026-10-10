class Solution {
public:
int a[105];
    
    int rob(vector<int>& nums) {
        // for(int i=0;i<105;i++)
        // a[i]=-1;
        a[nums.size()]=0;
        int cur=0;
        int next =0;
        int nextt=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int x=next;
           int y=nums[i];
            if(i+2<nums.size())
            y=y+nextt;
            cur=max(x,y);
            nextt=next;
            next=cur;
        }

        return cur;
    }
};