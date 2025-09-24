#include <vector>
using namespace std;

class Solution {
public:
    void backtrack(int i, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds) {
     
        if (i == nums.size()) {
            ans.push_back(ds);
            return;
        }

       
        ds.push_back(nums[i]);
        backtrack(i + 1, nums, ans, ds);

        
        ds.pop_back();
        backtrack(i + 1, nums, ans, ds);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        backtrack(0, nums, ans, ds);
        return ans;
    }
};
