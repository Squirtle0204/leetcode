class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=1;
        int st=0;
      for(int i=0;i<s.size();i++){
        int l=i,r=i;//odd len
        while(l>=0 && r<s.size() && s[l]==s[r]){
             if(r-l+1>maxlen){
                st=l;
                maxlen= r-l+1;

             }
             l--;
             r++;
        }

        //even
        int k=i,j=i+1;
        while(k>=0 && j<s.size()&& s[k]==s[j]){
            if(j-k+1>maxlen){
                st=k;
                maxlen=j-k+1;
            }
            k--;
            j++;
        }
      }
        return s.substr(st,maxlen);
    }
};