class Solution {
public:
// pair<int,int>dp[]
pair<int,int> f(string & s,int i,int j)
{
    if(i<0 || j>s.length())
    return {i+1,j-1};
    if(s[i]==s[j])
    {
        return f(s,i-1,j+1);
    }
    else
    return {i+1,j-1};
}
    string longestPalindrome(string s) {
        int maxi=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
        pair<int,int>l = f(s,i,i);
        if(l.first>l.second)
        continue;
        string k=s.substr(l.first,l.second-l.first+1);
        if(k.length()>maxi)
        {
            maxi=k.length();
            ans=k;
        }  
        }
        for(int i=0;i<s.length()-1;i++)
        {
       pair<int,int>l = f(s,i,i+1);
        if(l.first>l.second)
        continue;
        string k=s.substr(l.first,l.second-l.first+1);
        
        if(k.length()>maxi)
        {
            maxi=k.length();
            ans=k;
        }  
        }
        return ans;
    }
};
