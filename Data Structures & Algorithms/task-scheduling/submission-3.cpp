class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mapp;
        for(auto ch:tasks)
        {
            mapp[ch]++;
        }
        int maxfreq=0;
        for(auto it=mapp.begin();it!=mapp.end();it++)
        {
            maxfreq=max(maxfreq,it->second);
        }
        int count=0;
        for(auto it=mapp.begin();it!=mapp.end();it++)
        {
            if(it->second==maxfreq)
            count++;
        }
        int ans=(maxfreq-1)*(n+1)+count;
        int m=tasks.size();
        int a= max(ans,m);
        return a;
    }
};
