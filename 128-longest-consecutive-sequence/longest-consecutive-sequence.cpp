class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int maxi=0;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int count=0;

        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x =it;
                count=1;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x=x+1;
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};