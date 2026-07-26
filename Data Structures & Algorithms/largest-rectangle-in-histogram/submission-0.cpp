class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        vector<int>left(n,0);
        vector<int>right(n,n-1);
        // int dl=-1;
        // int dr
        for(int i=0;i<heights.size();i++)
        {
            if(!st.empty())
            {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
               
                left[i]=st.top()+1;
            }
            }
            st.push(i);
            // cout<<left[i]<<" "<<endl;
        }
        // st.clear();
        while(!st.empty())
        {
            st.pop();
        }
        // cout<<st.empty()<<" check"<<endl;

         for(int i=heights.size()-1;i>=0;i--)
        {
            if(!st.empty())
            {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
               
                right[i]=st.top()-1;
            }
            }
            st.push(i);
            // cout<<right[i]<<" "<<endl;
        }
        int maxi=-1;
        for(int i=0;i<heights.size();i++)
        {

int a=(right[i]-left[i]+1)*heights[i];
cout<<right[i]<<" "<<left[i]<<" "<<i<<" "<<heights[i]<<endl;
maxi=max(maxi,a);
        }

        return maxi;
    }
};
