class Solution {
public:
    string minWindow(string s, string t) {
        string s1=s;
        string word="";
        int l=0;
        int n=s.length();
        int m=t.length();
        vector<int>chart(128,0);
        vector<int>chars(128,0);
        int match=m;

        for(int i=0;i<m;i++)
        {
            chart[t[i]]++;
        }
        int mini=1e9;
        for(int i=0;i<n;i++)
        {
            chars[s[i]]++;
            if(chars[s[i]] <= chart[s[i]])
                match--;
           if(match<=0)
           {
            while(l<=i)
            {
                if(mini>(i-l+1))
                {
                    word=s1.substr(l,i-l+1);
                    mini=i-l+1;
                } 

                if(chart[s[l]]==0 || chart[s[l]]<chars[s[l]] )
                {
                    chars[s[l]]--;
               l++;
                }
                else 
                {
                    
                break;
                }
            }


           }

        }
        return word;
    }
};
