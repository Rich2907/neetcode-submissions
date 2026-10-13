class Solution {
public:
int f(string & s,int i,int j)
{
    if(i<0 || j>s.length())
    return 0;
    if(s[i]==s[j])
    {
        return 1+f(s,i-1,j+1);
    }
    else
    return 0;
}
    int countSubstrings(string s) {
        int maxi=0;
        string ans="";
        int l=0;
        for(int i=0;i<s.length();i++)
        {
        l+= f(s,i,i);
        }
        for(int i=0;i<s.length()-1;i++)
        {
       l+= f(s,i,i+1);
        }
        return l;

    }
};
