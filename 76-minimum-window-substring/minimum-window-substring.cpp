class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0;
        int count =0;
        int m = t.size();
        vector<int>nums(256,0);
        int minlen = INT_MAX;
        int sindex=-1;

    for(int i=0;i<m ;i++){
         nums[t[i]]++;
    }

     while( r < s.size()){
        if(nums[s[r]]>0)
            count++;
            
        nums[s[r]]--;
        

            while(count == m){
                if( r-l+1 < minlen){
                    minlen = r-l+1;
                    sindex=l;
                }

                nums[s[l]]++;
                if(nums[s[l]]>0)count = count -1;
                l++;

            }

        
           r++;
     }

       return sindex==-1?"":s.substr(sindex,minlen); 
    }
};