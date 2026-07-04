class Twitter {
public:
    Twitter() {
    }
    
        map<int,deque<pair<int,int>>>mapping;
        map<int,vector<int>>following;
       int t=0;
    void postTweet(int userId, int tweetId) {
       deque<pair<int,int>>& ui = mapping[userId];
       ui.push_back({t,tweetId});
       deque<pair<int,int>>uii=ui;
       while(!uii.empty())
       {
        cout<<uii.front().first<<" "<<uii.front().second<<endl;
        uii.pop_front();
       }
       t++;
    }
    
    vector<int> getNewsFeed(int userId) {
        deque<pair<int,int>>ui=mapping[userId];    
       int count=0;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        vector<int>followingList=following[userId];
        reverse(followingList.begin(),followingList.end());
        for(auto followee:followingList)
        {
            cout<<followee<<endl;
        deque<pair<int,int>>u=mapping[followee]; 
        vector<int>a;   
 while(!u.empty())
        {
            pq.push(u.back());
            u.pop_back();
        }
        }
        while(!ui.empty())
        {
            pq.push(ui.back());
            ui.pop_back();
        }
        while(ans.size()<10 && pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId && (find(following[followerId].begin(), following[followerId].end(), followeeId)) == following[followerId].end())
        following[followerId].push_back(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if(followerId!=followeeId)
        std::erase(following[followerId],followeeId);
    }

};
