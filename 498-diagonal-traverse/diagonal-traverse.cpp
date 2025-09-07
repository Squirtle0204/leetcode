class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty()||mat[0].empty())return {};
        vector<int>ans;
        int m=mat.size(),n=mat[0].size();
        int i=0,row=0,col=0;
        bool up=true;
        while(row<m && col<n){
            //if diagonal is going up
            if(up){
                while(row>0 && col<n-1){
                    ans.push_back(mat[row][col]);
                    row--,col++;
                }
                 ans.push_back(mat[row][col]);
                 if(col==n-1){
                    row++;
                 }
                 else{
                    col++;
                 }
            }
            else{
                while(col>0 && row<m-1){
                    ans.push_back(mat[row][col]);
                    col--,row++;
                }
                 ans.push_back(mat[row][col]);
                 if(row==m-1){
                    col++;
                 }
                 else{
                    row++;
                 }
            }
            up=!up;
        }
        return ans;
        
    }
};