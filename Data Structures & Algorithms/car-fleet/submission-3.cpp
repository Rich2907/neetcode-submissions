class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>ans;
        set<pair<int,double>>cars;
        for(int i=0;i<position.size();i++)
        {
            
            
        double k=(target-position[i])/((double)speed[i]);
        double y = round(k * 100.0) / 100.0;
        cars.insert({position[i],y});
        }
        double t=-1;
        auto it=cars.end();
        it--;
        for(;;it--)
        {
            
            if(ans.empty())
            {
                ans.push_back(it->second);
                t=it->second;
            }
            else if(it->second >t)
            {
                 ans.push_back(it->second);
                t=it->second; 
            }
        else
         ;
            cout<<it->first<<" "<<it->second<<endl;
            if(it==cars.begin())
            break;
        }
        return ans.size();

    }
};
