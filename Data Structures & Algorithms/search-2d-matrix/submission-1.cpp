class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int mi=matrix.size();
       int n=matrix[0].size();
        int l=0,r=matrix.size()*matrix[0].size()-1;
        cout<<r<<" "<<endl;
        bool ans=false;
        while(l<=r)
        {
            int m=(l+r)/2;
            cout<<matrix[m/n][m%n]<<" "<<target<<endl;
            // cout<<mi<<" "<<mr<<" "<<matrix[mi][mr]<<" "<<target<<endl;
            if(matrix[m/n ][m%n]==target)
            {
                
                ans=true;
                break;
            }
            else if(matrix[m/n ][m%n]>target)
            {
               r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};
