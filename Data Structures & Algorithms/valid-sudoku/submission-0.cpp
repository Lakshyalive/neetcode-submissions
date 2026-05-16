class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         int rowcase[9][9] = {0};
         int colcase[9][9] = {0};
         int gridcase[9][9] = {0};
        for(int i = 0 ; i < board.size() ; i++) {
            for(int j = 0 ; j < board.size() ; j ++) {
                if(board[i][j] != '.') {
                    // int num = stoi(board[i][j]);
                    int num = board[i][j] - '0';

                    int k = (i/3) * 3 + j/3;

                    if(rowcase[i][num - 1]++ or colcase[j][num - 1]++ or gridcase[k][num - 1]++) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
