class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool flag=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                cout<<"open "<<s[i]<<endl;
                st.push(s[i]);
            }
            else
            {
                
                // cout<<"top "<<st.top()<<endl;
                if(!st.empty() && ((st.top()== '{' && s[i] =='}') || (st.top()== '[' && s[i] ==']') || (st.top()== '(' && s[i] ==')')))
                {
                    cout<<"close "<<s[i]<<endl;
                    st.pop();
                
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(!st.empty())
flag=false;
return flag;
    }
};
