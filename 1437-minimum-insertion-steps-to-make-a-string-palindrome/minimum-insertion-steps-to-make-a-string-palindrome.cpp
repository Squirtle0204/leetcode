class Solution {
public:

    int lcs(string text1,string text2){
        int n = text1.size();
        int m=text2.size();

        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int lps(string text1,string text2){
        string tt= text2;
        reverse(tt.begin(),tt.end());
        return lcs(text1,tt);
    }
     
    int minInsertions(string s) {
        int nn = s.size();
        return nn-lps(s,s);
        
    }
};