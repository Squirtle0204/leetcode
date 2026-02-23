class Solution {
public:

  bool isPossible(vector<int> &bloomDay,int day,int m,int k){
    int count=0;
    int noB=0;
    for(int i =0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            count++;
        }
        else{
            noB += (count/k);
            count =0;
        }
    }
         noB += (count/k);
         return noB>=m;
    }
  
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m * 1LL * k * 1LL;
        if(val>bloomDay.size())return -1;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid =(low+high)/2;
            if(isPossible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};