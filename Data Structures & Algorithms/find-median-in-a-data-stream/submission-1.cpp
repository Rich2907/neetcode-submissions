class MedianFinder {
public:
    MedianFinder() {
        
    }
    vector<int>arr;
    void addNum(int num) {
        arr.push_back(num);
    }
    
    double findMedian() {
        sort(arr.begin(),arr.end());
        int n=arr.size();

        double ans=0;
          int k=n/2; 
      if(n%2==0 )
        {
                int kil=(double)arr[k-1]+(double)arr[k];
            ans=(double)(kil)/2.0;
        }
        else
        {
            cout<<n/2<<"tkha";
        ans=arr[n/2];
        }
        return ans;
        
    }
};
