class Solution {
public:

    vector<int>genrow(int row){
        vector<int>ansrow;
        ansrow.push_back(1);
        int ans=1;
        for(int col=1;col<row;col++){
             ans = ans*(row-col);
            ans = ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>anss;
        for(int i=1;i<=numRows;i++){
            anss.push_back(genrow(i));
        }
  return anss;
        
    }
};