class Solution {
public:
unordered_map<int,int>s;
int c=0;

    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
    for(int i=0;i<nums.size();i++)
    {
        if(s.find(nums[i]-1)!=s.end())
        c=s[nums[i]-1]+1;
        else
        c=1;
        s[nums[i]]=c;
        maxi=max(maxi,c);
    }        
    return maxi;
    }
};
