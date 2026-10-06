class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0;
        int l=0,r=0;
        int ans=0;

        while(r<nums.size()){
            if(nums[r]==0)zero++;

            if(zero>k){
                if(nums[l]==0)zero--;
                l++;
            }

            else{
                ans = max(ans,r-l+1);
            }
            r++;
        }
         return ans;
    }
};