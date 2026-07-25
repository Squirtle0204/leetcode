class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int lsum=0,rsum=0;
        

        for(int i=0;i<k;i++){
            lsum += card[i];
        }
        int maxsum = lsum;
        int index=card.size()-1;

        for(int i=k-1;i>=0;i--){
        
            lsum -= card[i];
            rsum += card[index];
            index--;
            maxsum= max(maxsum,lsum+rsum);

        }
        return maxsum;

    }
};