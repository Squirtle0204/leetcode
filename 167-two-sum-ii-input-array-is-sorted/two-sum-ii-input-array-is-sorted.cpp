class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        
        int left=0,right=nums.size()-1;

        while(left<right){
           long long sum = nums[left]+ nums[right];
            if(sum==target){
                return {left +1, right +1};
                
            }
            else if (sum>target){
                right--;
            }
            else left++;
        }
        return{};
    }
};