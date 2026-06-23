class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
            }
            return pos;
        
        }

        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
            
        }
        for(int i= 0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }

        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());

        int i=0,j=0;

        while(i<pos.size() && j<neg.size()){
             if(pos[i]<neg[j]){
               ans.push_back(pos[i]);
               i++;
             }
             else {
                ans.push_back(neg[j]);
                j++;
             }
        }

        while(i<pos.size()){
            ans.push_back(pos[i]);
            i++;
        }
        while(j<neg.size()){
            ans.push_back(neg[j]);
            j++;;
        }
        return ans;
        
    }
};