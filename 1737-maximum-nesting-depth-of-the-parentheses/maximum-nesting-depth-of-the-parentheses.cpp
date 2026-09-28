class Solution {
public:
    int maxDepth(string s) {
        int ans=0,x=0;
        for(auto it: s){
            if(it=='(')x++;
            if(it==')')x--;
            ans=max(ans,x);
        }
        return ans;
        
    }
};