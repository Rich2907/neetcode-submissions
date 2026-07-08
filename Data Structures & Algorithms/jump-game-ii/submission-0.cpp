class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        int farthest=0;
        int step=0;
        while(r<n-1)
        {
            int j=l;
            while(j<=r && j<n)
            {
                farthest=max(farthest,j+nums[j]);
                j++;
            }
            step++;

                 l=r+1;
            r=farthest;
        }
        
        return step;

    }
};
