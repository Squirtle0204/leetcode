class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        vector<pair<int,int>>vec(n);
        long long totalcost=0;

        for(int i=0;i<n;i++){
            vec[i]={nums[i],cost[i]};
            totalcost +=cost[i];

        }
        sort(vec.begin(),vec.end());

        //finding target

       long long currcost=0;
       int target=0;
       for(int i =0; i<n; i++){
           currcost += vec[i].second;
           if(currcost >=(totalcost+1)/2){
              target=vec[i].first;
              break;
           }
       }

       long long totalans=0;
       for(int i=0; i<n; i++){
       totalans += 1LL * abs(vec[i].first- target)* vec[i].second;
       }
       return totalans;
        
    }
};