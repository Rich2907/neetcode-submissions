class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>a;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>ans;
            int l=i+1;
            int h=nums.size()-1;
            while(l<h)
            {
                if(nums[l]+nums[h]==-1*nums[i])
                {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[h]);
                   a.insert(ans);
                   l++;
                   h--;
                   ans.clear();
                }
                else if(nums[l]+nums[h]<-1*nums[i])
                {
                    l++;
                }
                else
                h--;
            }
          
        }
        vector<vector<int>>anss;
        for(auto it=a.begin();it!=a.end();it++)
        anss.push_back(*it);
        return anss;

    }
};
