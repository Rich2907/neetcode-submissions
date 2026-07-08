class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int pointer=size-1;
        for(int i=size-2;i>=0;i--)
        {
            if((pointer-i)<=nums[i])
            pointer=i;
        }
        if(pointer==0)
        return true;
        else
        return false;
        
    }
};
