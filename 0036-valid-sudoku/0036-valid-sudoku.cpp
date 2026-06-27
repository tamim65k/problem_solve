class Solution {
public:
    bool isValidSudoku(vector<vector<char>> & board){
        bool r[9][9] = {false};
        bool c[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';//it becomes '9' to 8 which is the current index
                    int boxIndex = (i/3)*3 + (j/3);
                    if(r[i][num] or c[j][num] or boxes[boxIndex][num]) return false;
                    r[i][num] = c[j][num] = boxes[boxIndex][num] = true;
                }
            }
        }
        return true;
    }
};