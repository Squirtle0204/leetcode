class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int ans=-1;

        for(int num:nums){
            mp[num]++;
        }
        
        // if (k==1)

        if(k==1){

            for( auto & [num,count] : mp){
                if(count==1){
                    ans=max(ans,num);

                }
                
            }
            return ans;
        }
        //if(k==n)
        if(k==n){
            for(auto num:nums){
                ans = max(ans,num);
                
            }
            return ans;
        }

        //if 1<k<n only nums[0] and nums[n-1]occurs once

        if(mp[nums[0]]==1){
            ans = max(ans,nums[0]);
        }
        if(mp[nums[n-1]]==1){
            ans= max(ans,nums[n-1]);
        }
        return ans;
    }
};