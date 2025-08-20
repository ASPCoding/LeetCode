class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Solution is scalable to infinity, however because a sodoku board is a set 9x9 board, a brute forced method is faster
        unordered_map<int, set<char>> rows, cols;
        set<char> square;
        int row = 0;
        for(int col = 0; col < 9; ++col){
            char val = board[row][col];
            if(val != '.'){
                if(rows[row].count(val) || cols[col].count(val) || square.count(val)){
                    return false;
                }else{
                    rows[row].insert(val);
                    cols[col].insert(val);
                    square.insert(val);
                }
            }if(row == 8 && col == 8){
                return true;
            }
            if((row+1)%3 == 0 && col == 8){
                col = -1;
                row += 1;
                set<char> new_square;
                square = new_square;
            }else if((row+1)%3 == 0 && (col + 1)%3 == 0){
                row -= 2;
                set<char> new_square;
                square = new_square;
            }else if((col +1 )%3 == 0){
                col -=3;
                row +=1;
            }
        }
        return true;
    }
};