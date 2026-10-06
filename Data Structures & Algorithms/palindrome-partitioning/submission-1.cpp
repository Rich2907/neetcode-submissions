class Solution {
public:
vector<vector<string>>ans;
 bool ispalin(string s)
 {
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    return true;
    return false;
 }
int n;
 void part(string s,int i,vector<string>l)
 {
    if(i>=s.length())
    {
        ans.push_back(l);
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        string k=s.substr(i,j-i+1);
        if(ispalin(k))
        {
        l.push_back(k);
        part(s,j+1,l);
        l.pop_back();
        }
    }
    return ;
 }
    vector<vector<string>> partition(string s) {
        // cout<<ispalin("aaa")<<" "<<ispalin("Ajh")<<endl;
    vector<string>a;
    part(s,0,a);
        return ans;
    }
};
