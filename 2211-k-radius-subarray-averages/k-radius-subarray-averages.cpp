class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        
        vector<int>avgg(n,-1);

        long long windowsize= 1LL*2*k+1;
        if(windowsize>n)return avgg;

        long long currsum=0;

        for(int i=0;i<windowsize;i++){
            currsum += nums[i];
        }

        avgg[k]= currsum/windowsize;

        for(int i= k+1;i<n-k;i++){
            currsum = currsum + nums[i+k]-nums[i-k-1];
            avgg[i]=currsum/windowsize;
        }
        return avgg;
    }
};