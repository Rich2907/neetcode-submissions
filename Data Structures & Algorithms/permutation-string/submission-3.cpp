class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        bool flag=false;
        int n=s1.length();
        int m=s2.length();
        if(n>m)
        return false;
        vector<int>chars1(26,0);
        vector<int>chars2(26,0);
        
        for(int i=0;i<n;i++)
        {
            chars1[(s1[i]-'a')]++;
            chars2[s2[i]-'a']++;
        }
        if(chars2 == chars1)
        {
            // cout<<"here"<<endl;
        flag=true;
        
        }int j=0;
        for(int i=n;i<m;i++)
        {
            chars2[s2[j]-'a']--;
            chars2[s2[i]-'a']++;
            j++;
            if(chars2==chars1)
            {
            flag =true;
            }
        }
        return flag;
    }
};
