class Solution {
public:

    string encode(vector<string>& strs) {
     string word="";
     for(int i=0;i<strs.size();i++)
     {
        word+=strs[i]+"{";
     }
     return word;
    }

    vector<string> decode(string s) {
 vector<string>ans;
string word="";
 for(int i=0;i<s.size();i++)
 {
    if(s[i]!='{')
    word+=s[i];
    else
    {
        ans.push_back(word);
        word="";
    }

 }
 return ans;

    }
};
