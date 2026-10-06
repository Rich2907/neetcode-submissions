class Solution {
public:
    vector<vector<int>>ans;
    void sub(vector<int>& nums, int i, vector<int>& a)
    {
        if(i>=nums.size())
        {
            ans.push_back(a);
            return ;
        }
        a.push_back(nums[i]);
        sub(nums,i+1,a);
        a.pop_back();
        while(i<nums.size()-1 && nums[i]==nums[i+1])
        {
            i++;
        }
        sub(nums,i+1,a);
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int>a;
    sort(nums.begin(),nums.end());
    sub(nums,0,a);  
    // sort(ans.begin(),ans.end());
    return ans;  
    }
};
