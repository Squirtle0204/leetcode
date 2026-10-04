class Solution {
public:
    bool checkValidString(string s) {
        int minopen=0,maxopen=0;

        for(char i : s){
            if(i=='(')minopen++,maxopen++;
            else if(i == ')')minopen--,maxopen--;

            else minopen--,maxopen++;

            if(maxopen<0)return false;
            if(minopen<0)minopen=0;
        }
        return minopen==0;
    }
};