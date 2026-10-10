class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        maxi = max(nums[i],maxi);
        mp[nums[i]]++;
       }
       int size = maxi+1;
       if(size!=nums.size())return false;
       for(auto it :mp){
        if(it.first==maxi){
            if(it.second!=2)return false;
        }
        else{
            if(it.second!=1)return false;
        }
       }

        return true;
    }
};