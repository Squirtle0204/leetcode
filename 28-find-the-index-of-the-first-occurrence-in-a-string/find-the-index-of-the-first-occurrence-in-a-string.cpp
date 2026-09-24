class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m= needle.size();
        if(m==0)return -1;
        if(m>n)return -1;

        for(int i=0;i<n;i++){int j=0;
            for(;j<m;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==m)return i;
        }
        return -1;
    }
};