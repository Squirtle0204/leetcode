class Solution {
public:

    bool ispalindrom(string & s ,int i,int j ){
        int st = i,end=j;

        while(st<=end){
            if(s[st]!=s[end])return false;
            else st++,end--;

        }
        return true;
    }
    string longestPalindrome(string s) {
      string ans="";

      for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(ispalindrom(s,i,j))
            if(j-i+1>ans.size()){
                ans = s.substr(i,j-i+1);
            }
        }
      }
        
        return ans;
    }
};