class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>st;
        int ans=0;

        for(int i=0;i<jewels.size();i++){
            st.insert(jewels[i]);
        }
        

        for(char i : stones){
            if(st.count(i))
            ans++;
        }
        return ans;
    }
};