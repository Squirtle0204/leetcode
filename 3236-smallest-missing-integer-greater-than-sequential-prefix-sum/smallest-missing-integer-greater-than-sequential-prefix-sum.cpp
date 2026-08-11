class Solution {
public:
    int missingInteger(vector<int>& nums) {   
        int prsum = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                prsum += nums[i];
            } else {
                break; 
            }
        }

      
        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(prsum)) {
            prsum++;
        }

        return prsum;
    }
};