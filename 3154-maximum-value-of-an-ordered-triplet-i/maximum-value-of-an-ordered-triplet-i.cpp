class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0,maxd=0,mx=0;
        for(int num:nums){
            ans=max(ans,maxd*num);
            maxd=max(maxd,mx-num);
            mx=max(mx,(long long) num);
        }
        return ans;
        
        
    }
};