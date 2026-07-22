class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     int l=0;
     deque<int>dq;
        dq.push_back(0);
        vector<int>ans;
        for(int i=1;i<k;i++)
        {
            if(nums[dq.back()]>=nums[i])
            {
                cout<<nums[dq.front()]<<" "<<nums[i]<<endl;
                dq.push_back(i);
            }
            else
            {
                // cout<<i<<" "<<nums[dq.back()]<<endl;
                while(!dq.empty() && nums[dq.back()]<nums[i])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }

        }
        ans.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++)
        {
            l++;
            while(!dq.empty() && dq.front()<l)
            {
               
                dq.pop_front();
            }
           if(nums[dq.back()]>=nums[i])
            {
                //  cout<<nums[dq.front()]<<" "<<nums[i]<<" "<<i<<endl;
                dq.push_back(i);
            }
            else
            {
                // cout<<i<<" "<<nums[dq.back()]<<endl;
                while(!dq.empty() && nums[dq.back()]<nums[i])
                {
                    // cout<<i<<" "<<nums[dq.back()]<<endl;
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            ans.push_back(nums[dq.front()]);
            


        }
return ans;
    }
};
