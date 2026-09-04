class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int bestbuy=nums[0];
        int profit=0;
        int maxi=0;

        for(int i = 0 ;i<nums.size();i++){
            bestbuy = min(bestbuy,nums[i]);

            profit = nums[i]-bestbuy;
            maxi = max(profit,maxi);
        }
        return maxi;
    }
};