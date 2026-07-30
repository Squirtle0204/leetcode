class Solution {
public:

   int numofsub(vector<int> & nums, int goal){
    if(goal < 0) return 0;
    int count =0;
    int sum =0;
    int l=0,r=0;

    while(r<nums.size()){
        sum += nums[r];

        while(sum > goal){
            sum = sum - nums[l];
            l++;
        }

        count = count + (r-l+1);
        r++;
    }

     return count;
   }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int ans = numofsub(nums,goal) - numofsub(nums,goal-1);
        return ans;
        
    }
};