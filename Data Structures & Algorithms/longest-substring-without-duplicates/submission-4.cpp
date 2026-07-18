class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char,int>a;
        int len=0;
        int st=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
        
            // cout<<a[v]<<"ans"<<endl;
            if(a.find(s[i])==a.end() || a[s[i]]<st)
            {
                len++;
                maxi=max(maxi,len);
                a[s[i]]=i;
            }
            else
            {
                int j=st;
                st=a[s[i]]+1;
                // while(j!=st)
                // {
                //     a.erase(s[j]);
                //     j++;
                // }
                len=i-st+1;
                maxi=max(maxi,len);
                a[s[i]]=i;
                cout<<" jh"<<len<<" "<<st<<" "<<endl;
            }
            // cout<<v<<" "<<len<<endl;

        }
        return maxi;
    }
};
