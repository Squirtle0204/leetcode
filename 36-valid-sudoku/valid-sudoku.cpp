class Solution {
public:

   bool isvalid(vector<vector<char>> & board, int row,int col,char c){
    for(int i=0;i<9;i++){
        if(i!= row && board[i][col]==c)return false;// for column
        if(i!=col && board[row][i]==c)return false; //for row

        int rowi = 3*(row/3) + i/3;
        int coli = 3*(col/3) + i%3;

        if(rowi!=row && coli !=col && board[rowi][coli]==c)return false;
    }
    return true;
   }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
         for (int j=0;j<board[0].size();j++){
            if(board[i][j]!='.'){
               if(!isvalid(board,i,j,board[i][j]))return false;
            }
         }
        }
        return true;
        
    }
};