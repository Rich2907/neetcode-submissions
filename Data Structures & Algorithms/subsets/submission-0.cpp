class Solution {
public:
vector<vector<int>>ans;
int n;
       void fin(vector<int>& nums,int i,vector<int>a)
       {
        if(i>=n)
        {
            ans.push_back(a);
            return ;
        }
        a.push_back(nums[i]);
        fin(nums,i+1,a);
        a.pop_back();
        fin(nums,i+1,a);
        return ;
       }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>a;
    fin(nums,0,a); 
    return ans;   
    }
};
