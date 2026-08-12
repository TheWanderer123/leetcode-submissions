class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<9;++i){
            unordered_set<int>rows;
            unordered_set<int>cols;
            unordered_set<int>boxes;
            int start_col=(i%3)*3;
            int start_row=(i/3)*3;

            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    if(rows.count(board[i][j])) return 0;
                    rows.insert(board[i][j]);
                }

                if(board[j][i]!='.'){
                    if(cols.count(board[j][i])) return 0;
                    cols.insert(board[j][i]);
                }
                
                int c=start_col+(j%3);
                int r=start_row+(j/3);

                if(board[r][c]!='.'){
                    if(boxes.count(board[r][c])) return 0;
                    boxes.insert(board[r][c]);
                }
            }
        }
        return 1;
    }
};