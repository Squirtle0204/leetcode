class Solution {
public:

    bool check(int idx,string s, vector<string>& wordDict,vector<int>&dp,unordered_set<string>&st){
      
       if(idx == s.size())return true;
       if(dp[idx]!=-1)return dp[idx];

       
            for(int l = 1;idx+l<=s.size();l++){
                string temp = s.substr(idx,l);
                if(st.find(temp)!=st.end() && check(idx+l,s,wordDict,dp,st)){
                    return dp[idx]=true;
                }
            }
       
      
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {    vector<int>dp(s.size(),-1);
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        return check(0,s,wordDict,dp,st);
        
    }
};