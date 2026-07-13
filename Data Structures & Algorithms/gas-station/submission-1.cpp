class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      vector<int>maxdif;
      int  maxi=0, mi=-1;
      for(int i=0;i<gas.size();i++)
      {
        maxdif.push_back(gas[i]-cost[i]);
              }
      int s=0;
      int cs=0;
      int in=0;
      for(int i=0;i<gas.size();i++)
            {
                int k=maxdif[i];
              
                s+=k;
                cs+=k;
                 cout<<k<<" "<<s<<" "<<cs<<" "<<in<<endl;
                if(cs<0)
                {

                    cs=0;
                    in=i+1;
                }
                
            }
             
if(s<0)
return -1;
else
return in;
    }
};
