class Solution {
public:
 int binarySearch(int l,int h,int t,vector<int> & nums)
 {
    // cout<<l<<" "<<h<<" "<<t<<"h"<<endl;
    int ans=-1;
    while(l<=h)
    {
        
        int m=(l+h)/2;
        if(t==nums[m])
        {
        ans=m;
        break;
               }       
                if(t>nums[m])
    {
        l=m+1;
    }
    else
    h=m-1;
    
    }
    return ans;

 }
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int ans=0;
        while(l<=h)
        {
            if(nums[l]<nums[h])
            {
                if(nums[l]<nums[ans])
                {
                    cout<<ans<<endl;
                ans=l;
                break;
                }
            }
                int m=(l+h)/2;
                if(nums[m]<=nums[ans])
                ans=m;
                if(nums[l]<=nums[m])
                l=m+1;
                else
                h=m-1;

        }
        int a=0;
        cout<<nums[ans]<<" "<<target<<endl;
        if(ans!=0 && target>=nums[0] && target<=nums[ans-1])
        a=binarySearch(0,ans-1,target,nums);
        else
        a=binarySearch(ans,nums.size()-1,target,nums);
        cout<<ans<<" "<<endl;




        return a;
    }
};
