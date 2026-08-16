class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int>count(3,0);

        for(int i=0;i<stones.size();i++){
            count[stones[i]%3]++;
        }
        int co=count[0],c1=count[1],c2=count[2];

        if(co%2==0){
            return c1>=1 && c2>=1;
        }
        else{
            return abs(c1-c2)>2;
        }
        
        
    }
};