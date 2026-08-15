class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xxor=0;
        int count=0;
     int n= nums.size();
        for(int i=0;i<nums.size();i++){
            xxor = xxor ^nums[i];
            if(nums[i]!=0)count ++;
         

        }
         if(xxor!=0)return n;

         else if( xxor==0 && count !=0)return n-1;
         else return 0;

    
    }
};