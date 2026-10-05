class Solution {
public:
vector<string>ans;
int n;
vector<string>m;
        void fin(string d,int i, string s)
        {
            if(i>=n){
                if(s=="")
                return;
                ans.push_back(s);
            return ;
            }
cout<<"here"<<m[d[i]-'0'-1]<<endl;
            string k=m[d[i]-'0'-1];
            cout<<k<<endl;
            for(int j=0;j<k.length();j++)
            {
                fin(d,i+1,s+k[j]);
            }

        }

    vector<string> letterCombinations(string digits) {
     m.push_back("uu");
     m.push_back("abc");
    m.push_back("def");
    m.push_back("ghi");
         m.push_back("jkl");
          m.push_back("mno"); m.push_back("pqrs"); m.push_back("tuv"); m.push_back("wxyz");
    //  cout<<m[9]<<endl;
      n=digits.size();
        fin(digits,0,"");
return ans;
    }
};
