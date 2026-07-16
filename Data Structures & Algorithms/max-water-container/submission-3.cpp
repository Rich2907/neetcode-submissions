class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int h=n-1;
        cout<<h<<" "<<n<<" "<<endl;
        int a=0;
        int maxi=0;
        while(l<h)
        {
            a=min(heights[l],heights[h])*(n-1);
            cout<<heights[l]<<" "<<heights[h]<<" "<<n<<" "<<a<<endl;
            maxi=max(maxi,a);
            if(heights[l]<heights[h])
            {
            l++;          
            }
            else
            h--;
            n--;
        }
        return maxi;

    }
};
