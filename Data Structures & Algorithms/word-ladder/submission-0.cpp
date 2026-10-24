class Solution {
public:

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        sort(wordList.begin(),wordList.end());
        map<string,int>m;
        bool flag=0;
        int n=wordList.size();
        for(int i=0;i<wordList.size();i++)
        {
            m[wordList[i]]=i;
            if(wordList[i]==beginWord)
            flag=1;
        }

        if(flag==0)
        m[beginWord]=n;
        if(m.find(endWord) == m.end())
       return 0;
       int ed=m[endWord];
        vector<vector<int>>adj(n+1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<wordList[i].length();j++)
            {
                char ch='a';
                for(int c=1;c<=26;c++)
                {
                    string nwrd=wordList[i];
                nwrd[j]=ch++;
                    if(m.find(nwrd)!=m.end() && nwrd!=wordList[i])
                    {
                        adj[m[wordList[i]]].push_back(m[nwrd]);
                         adj[m[nwrd]].push_back(m[wordList[i]]);
                    }

                }   
                       }
        }

        if(flag==0)
        {
        for(int j=0;j<beginWord.length();j++)
            {
                char ch='a';
                for(int c=1;c<=26;c++)
                {
                    string nwrd=beginWord;
                nwrd[j]=ch++;
                    if(m.find(nwrd)!=m.end() && nwrd!=beginWord)
                    {
                        adj[m[beginWord]].push_back(m[nwrd]);
                         adj[m[nwrd]].push_back(m[beginWord]);
                    }
        }
        }}

        vector<int>dis(n+1,1e9); 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mh;
        // queue<pair<int,int>>q;

        if(flag==0)
        mh.push({0,n});
        else
        mh.push({0,m[beginWord]});
        
        while(!mh.empty())
        {
            for(int j=0;j<mh.size();j++)
            {
              int node=mh.top().second;
              int dist=mh.top().first;
            //   cout<<node<<" "<<dist<<endl;
              mh.pop();
              for(auto child:adj[node])
              {
                if(dis[child]>dist+1)
                {
                    dis[child]=dist+1;
                    mh.push({dist+1,child});
                }
              }
            }  
        }
        if(dis[m[endWord]]==1e9)
        return 0;
        return dis[m[endWord]]+1;
    }
};