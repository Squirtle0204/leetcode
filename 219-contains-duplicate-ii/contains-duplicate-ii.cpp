class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>lastindex;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(lastindex.find(x)!=lastindex.end()){
                if(i-lastindex[x]<=k) return true;
            }
            lastindex[x]=i;
        }
        return false;
        
    }
};