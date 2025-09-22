class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
       int maxf=0;
      for(const auto&f:mp){
           
                maxf=max(maxf,f.second);
            }
            int ans=0;
            for(const auto&f:mp){
                if(f.second==maxf){
                    ans+=f.second;
                }
            }    

return ans;
    }   
    
};