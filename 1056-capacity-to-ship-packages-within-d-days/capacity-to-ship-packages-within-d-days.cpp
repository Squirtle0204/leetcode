class Solution {
public:
    int finddays(vector<int>& wt,int mid){
        int days=1,load=0;
        for(int i=0;i<wt.size();i++){
            if(load+wt[i]>mid){
                days=days+1;
                load=wt[i];
            }
            else{
                load +=wt[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& wt, int days) {
        int low=*max_element(wt.begin(),wt.end());
        int high=accumulate(wt.begin(),wt.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(finddays(wt,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       return low;
    }
};