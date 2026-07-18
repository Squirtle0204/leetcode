class Solution {
    int gcd(int a,int b){
        if(b==0){
            return a;

        }
        else return gcd(b,a%b);
    }
public:
    int findGCD(vector<int>& nums) {
        int smallest=nums[0];
        int largest=nums[0];
        for(int i=1;i<nums.size();i++){
            largest=max(largest,nums[i]);
            smallest=min(smallest,nums[i]);
        }
        return gcd(largest,smallest);
        
    }
};