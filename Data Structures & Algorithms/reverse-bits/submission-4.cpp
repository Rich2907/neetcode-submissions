class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        // cout<<n<<endl;
       for(int i=1;i<32;i++)
       {
        if((n&1)==1)
        {
            // cout<<"executing"<<(ans|1)<<" "<<endl;
        ans=((ans|1));
        }
       
        ans=ans<<1;
       n= n>>1;
        cout<<(n)<<" "<<ans<<" "<< i<<endl;
    //    cout<<ans<<endl;
       }
       if((n&1)==1)
        {
            // cout<<"executing"<<(ans|1)<<" "<<endl;
        ans=((ans|1));
        }

       return ans;
    }
};
