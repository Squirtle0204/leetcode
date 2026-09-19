class Solution {
public:
    int rob(vector<int>& nums) {
        
        int previ=0;
        int previ2=0;

        for(int num:nums){
            int now = max(previ,num+previ2);

            previ2=previ;
            previ=now;
        }
        return previ;
    }
};