class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_map<int,int>m;
      bool flag =false;
       
     for(auto k:nums)
     {
        if(m.find(k)!=m.end())
        {
        flag=true;
        }
        m[k]++;

     }  
     return flag; 
    }
};