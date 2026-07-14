class Solution {
public:
    bool isPalindrome(string s) {
        string word="";
        
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' &&s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
        word+=tolower(s[i]);
    }
    cout<<word<<endl;
    int l=0;
    int h=word.length()-1;
    cout<<l<<" "<<h<<endl;
    bool flag=true;
    while(l<=h)
    {
        if(word[l]==word[h])
        {
            l++;
            h--;
        }
        else
        {
        flag=false;
        break;
            }
    }
return flag;

    }
};
