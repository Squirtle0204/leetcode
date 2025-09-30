class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        if(n==0)return {};
        if(n==1){
            ans.push_back(nums[0]);
            return ans;
        }
        unordered_map<int,int>count;
        if(nums.size()==1)return nums;
        for(int i=0;i<n;i++){
            count[nums[i]]++; 
                }
                for(auto &it:count){
                    if(it.second>n/3){
                        ans.push_back(it.first);
                    }
                }
         //sort(ans.begin(),ans.end());
         return ans;
        
    }
};