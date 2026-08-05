class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            unordered_set<int>row_set;
            unordered_set<int>col_set;
            unordered_set<int>box_set;

            int start_r=i/3*3;
            int start_c=i%3*3;
            for (int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    if(row_set.count(board[i][j])) return 0;
                    row_set.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(col_set.count(board[j][i])) return 0;
                    col_set.insert(board[j][i]);
                }
                int r = start_r+j/3;
                int c = start_c+j%3;
                if(board[r][c]!='.'){
                    if(box_set.count(board[r][c])) return 0;
                    box_set.insert(board[r][c]);
                }
            }
        }
        return 1;
    }
};