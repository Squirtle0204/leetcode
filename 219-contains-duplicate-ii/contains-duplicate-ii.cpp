class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;
        for (int i = 0; i < (int)nums.size(); i++) {
            int x = nums[i];
            if (lastIndex.find(x) != lastIndex.end()) {
                if (i - lastIndex[x] <= k) {
                    return true;
                }
            }
            lastIndex[x] = i;
        }
        return false;
    }
};
