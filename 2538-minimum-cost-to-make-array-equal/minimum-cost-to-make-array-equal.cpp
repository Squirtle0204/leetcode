class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long totalcost = 0;
        vector<pair<int,int>>vec(nums.size());
        

        for(int i=0;i<nums.size();i++){
            vec[i]={nums[i],cost[i]};
            totalcost +=cost[i];
        }

        sort(vec.begin(),vec.end());

        long long currcost=0;
        int target=0;

        for(auto it : vec){
            currcost += it.second;
            if(currcost >=(totalcost+1)/2){
                target = it.first;
                break;

            }
        }

            long long totalans =0;

            for(auto it : vec){
                totalans += 1LL * abs(it.first-target)*it.second;
            }
        
        return totalans;
    }
};