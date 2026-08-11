class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>st;
        int prsum=0;


        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);

        }
        int j=1,i=0;
        for( i=0;i<nums.size();i++){
            if(j<nums.size() && nums[j]==nums[i]+1){
                prsum += nums[i];
                j++;
            }
            else break;

        }
        prsum+= nums[i];


         while(st.count(prsum))prsum++;

        return prsum;


        
    }
};