class Solution {
public:
    vector<vector<int>>ans;
    void  combin(vector<int>& nums, int t,int i,vector<int>& a) {
        if(t==0)
        {
            ans.push_back(a);
            return ;
        }
        if(t<0 || i>=nums.size())
        {
           
            return ;
        }

            a.push_back(nums[i]);
            combin(nums,t-nums[i],i,a);
           a.pop_back();
            combin(nums,t,i+1,a);
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<int>a;
    combin(nums,target,0,a);
         return ans;   
    }
};
