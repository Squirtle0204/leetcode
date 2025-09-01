class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int val:nums){
            if(val<k)return -1;
            if(val>k)st.insert(val);
        }
        
        return st.size();
        }
    
};