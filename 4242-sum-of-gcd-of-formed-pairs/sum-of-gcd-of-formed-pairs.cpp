class Solution {
public:

     int gcd(int a,int b){
        if(b==0) return a;

        return gcd(b,a%b);
     }
    long long gcdSum(vector<int>& nums) {
        int maxi=0;
        vector<int>prefix(nums.size());

        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            prefix[i]=gcd(nums[i],maxi);
        }
        sort(prefix.begin(),prefix.end());
        int l=0,r=prefix.size()-1;
        long long sum=0;

        while(l<r){
            sum+= gcd(prefix[l],prefix[r]);
            l++;
            r--;

        }
        return sum;
        
    }
};