class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>>rows;
        unordered_map<int,unordered_set<char>>col;
        unordered_map<int,unordered_set<char>>sqr;

        //for rows
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.'){
                    continue;
                }
                if(rows[i].count(board[i][j])){
                    return false;
                }
                rows[i].insert(board[i][j]);
            }
        }

        for(int j=0;j<9;++j){
            for(int i=0;i<9;++i){
                if(board[i][j]=='.'){
                    continue;
                }
                if(col[j].count(board[i][j])){
                    return false;
                }
                col[j].insert(board[i][j]);
            }
        }

        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.'){
                    continue;
                }
                int box=i/3*3 + j/3;
                if(sqr[box].count(board[i][j])){
                    return false;
                }
                sqr[box].insert(board[i][j]);
            }
        }
        return true;
    }
};
