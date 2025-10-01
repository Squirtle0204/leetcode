class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            ans++;
            numBottles=numBottles-numExchange+1;
        }
        return ans;
        
    }
};