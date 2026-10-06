class Solution {
public:
vector<string>ans;
void gen(int n,int i,int c,string s)
{

if(i==n)
{
    if(c==0)
    ans.push_back(s);
return ;
}
if(c<0)
return ;
cout<<n<<" "<<i<<" "<<c<<" "<<s<<endl;
gen(n,i+1,c+1,s+'(');
gen(n,i+1,c-1,s+')');
return;
}
    vector<string> generateParenthesis(int n) {
       gen(n*2,1,1,"(");
return ans;
    }
};