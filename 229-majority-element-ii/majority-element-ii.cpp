class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=0;
        int el2=1;
        int cnt1=0;
        int cnt2=0;
        int n = nums.size();

        for(int it : nums){
            if(it == el1){
                cnt1++;
            }
            else if(it==el2)cnt2++;

            else if(cnt1==0){
                el1=it;
                cnt1=1;
            }
            else if(cnt2==0){
                el2=it;
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        //verify

        int cntt1=0;
        int cntt2=0;

        for(int it : nums){
            if(it == el1){
                cntt1++;
            }

            if(it==el2){
                cntt2++;
            }
        }

        if(cntt1 > n/3  && cntt2> n/3){
            return {el1,el2};
        }
        if (cntt1>n/3) return {el1};
        if(cntt2>n/3)return {el2};


         return {};
        
    }
};