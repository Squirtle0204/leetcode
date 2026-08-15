class Solution {
public:
    
     int noofs(vector<int>& nums, int pages){
        int student=1, noofp=0;

        for(int i=0;i<nums.size();i++){
            if(noofp + nums[i]<= pages){
                noofp += nums[i];
            }
            else{
                student++;
                noofp=nums[i];
            }
        }
        return student;
     }

     int findpages(vector<int>&nums, int m ){
        if(m>nums.size())return -1;
        int l = *max_element(nums.begin(),nums.end());
        int r = accumulate(nums.begin(),nums.end(),0);
        while(l<=r){
            int mid = l+(r-l)/2;

            if(noofs(nums,mid)>m)l=mid+1;
            else r=mid-1;
        }
        return l;
     }
    int splitArray(vector<int>& nums, int k) {
        return findpages(nums,k);
        
    }
};