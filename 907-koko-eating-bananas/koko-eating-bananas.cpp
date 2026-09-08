class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l =1;
        int r = *max_element(piles.begin(),piles.end());
        int ans=0;

        while(l<=r){
            int mid = l+(r-l)/2;
            long long hour =0;

            for(int pile:piles){
                 hour += (pile + mid-1LL)/mid;


            }

            if(hour<=h){
                ans = mid;
                r = mid-1;
            }

            else{
                l = mid+1;

            }

        }
       return ans; 
    }
};