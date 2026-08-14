class Solution {
public:

   bool ispossible( int day, int m, int k, vector<int>&bloom){
    int count=0,noofb=0;
    for(int i=0;i<bloom.size();i++){
          if(bloom[i]<= day){
            count++;
          }
          else{
            noofb += (count/k);
            count=0;
          }
    }

          noofb += (count/k);
          if(noofb >=m)return true;
          else return false;

    
   }
    int minDays(vector<int>& bloom, int m, int k) {
        int maxi=INT_MIN,mini=INT_MAX;

        for(int i=0;i<bloom.size();i++){
            maxi=max(maxi,bloom[i]);
            mini=min(mini,bloom[i]);
        }
        int l=mini,r=maxi;
        int ans=0;
        long long val=m*1LL * k*1LL;
        if( val> bloom.size())return -1;

        while(l<=r){
            int mid = (l+r)/2;

            if(ispossible(mid,m,k,bloom)==true){
                 ans= mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};