class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        
        int i=1;
        int l=0;

        while(i<=n && l< target.size()){
            ans.push_back("Push");

            if(i==target[l])l++;

            else{
                ans.push_back("Pop");
            }
            i++;
        }
        return ans;
        
    }
};