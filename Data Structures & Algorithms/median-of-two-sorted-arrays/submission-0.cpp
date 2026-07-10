class Solution {
public:
    bool rank( vector<int>nums1, vector<int>nums2,int m,int r)
    {
        int c=0;
        for(auto n:nums1)
        {
            if(n<m)
            c++;
        }
        for(auto n:nums2)
        {
            if(n<m)
            c++;
        }
        if(c>=r)
      return  true;
        else
        return false;
    }

 double getrankednum(long long l,long long h,int r, vector<int>nums1, vector<int>nums2)
 {
    long long ans=l;
    while(l<=h)
    {
        long long m=l+(h-l)/2;
        if(rank(nums1,nums2,m,r))
        {
            ans=m;
            h=m-1;
        }
        else
        l=m+1;
    }
    return (double)ans - 1;
 }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int min_val = -1e6, max_val = 1e6;
        if(!nums1.empty()) { min_val = min(min_val, nums1[0]); max_val = max(max_val, nums1.back()); }
        if(!nums2.empty()) { min_val = min(min_val, nums2[0]); max_val = max(max_val, nums2.back()); }
        
        long long l = (long long)min_val, h = (long long)max_val + 2;

        if((n+m)%2==0)
        {
            double f=getrankednum(l,h,(n+m)/2,nums1,nums2);
            double s=getrankednum(l,h,(n+m)/2 +1,nums1,nums2);
            return (f+s)/2.0;
        }
        return getrankednum(l,h,(n+m)/2 + 1,nums1,nums2);
    }
};