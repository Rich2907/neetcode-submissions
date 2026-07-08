class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int s=nums[0];
        int maxs=s;
        int l=0;
      for(int i=1;i<nums.size();i++)
    {    
        while(s<0 &&i<nums.size())
        {
            s=nums[i];
            maxs=max(maxs,s);
            i++;
        }
        if(i<nums.size())
        s+=nums[i];
        cout<<s<<endl;
        maxs=max(maxs,s);
    }
return maxs;
    }
};
