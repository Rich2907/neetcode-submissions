class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool flag=false;
        int n=s1.length();
        int m=s2.length();
        for(int i=0;i<=m-n;i++)
        {
            string word=s2.substr(i,n);
            sort(word.begin(),word.end());
            sort(s1.begin(),s1.end());
            if(word==s1)
            {
                flag=true;
                break;
            }
        }
        return flag;



    }
};
