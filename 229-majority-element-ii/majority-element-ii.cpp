class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=0;
        int cnt1=0;
        int el2=1;
        int cnt2=0;
        int n=nums.size();

        for(auto it: nums){
            if( it == el1){
                cnt1++;
            }
            else if( it==el2){
                cnt2++;
            }
            else if( cnt1==0){
                el1=it;
                cnt1=1;
            }
            else if( cnt2 ==0){
                el2=it;
                cnt2=1;
            }
            else{
            cnt1--;
            cnt2--;
            }
        }

        //verify
        int cnnt1=0,cnnt2=0;

        for(auto it : nums){
            if(it==el1){
                cnnt1++;
            }
            else if( it==el2){
                cnnt2++;
            }
        }

        if(cnnt1>n/3 && cnnt2>n/3){
            return{ el1,el2};
        }
        else if(cnnt1>n/3){
            return { el1};
        }
        else if(cnnt2>n/3){
            return{el2};
        }
        else{
            return {};
        }
        
       return {}; 
    }
};