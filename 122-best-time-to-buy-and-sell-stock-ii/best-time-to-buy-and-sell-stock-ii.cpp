class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0;
        int bestbuy=nums[0];

        for(int i=1;i<nums.size();i++){
            if( nums[i]>bestbuy){
              profit+= nums[i]-bestbuy;
                
            }
            bestbuy=nums[i];
        }
        return profit;
    }
};