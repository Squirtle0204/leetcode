class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long long anss=1;
        ans.push_back(1);
        for(int col=1;col<rowIndex+1;col++){
            anss = anss *(rowIndex+1-col);
            anss = anss/col;
           ans.push_back(anss);
        }
        return ans;
        
    }
};