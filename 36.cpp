#include<iostream>
#include<vector>
#include<unordered_map>

bool isValidSudoku(std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 9; ++i) {
        std::unordered_map<char, int> rFreq;
        std::unordered_map<char, int> cFreq;
        for (int j = 0; j < 9; ++j) {
            // for row
            if (board[i][j] != '.') {
                if (++rFreq[board[i][j]] > 1) {
                    return false;
                }
            }

            // for column
            if (board[j][i] != '.') {
                if (++cFreq[board[j][i]] > 1) {
                    return false;
                }
            }
        }
    }

    // for 3x3 boxes
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            std::unordered_map<char, int> boxFreq;
            for (int a = i; a < i + 3; ++a) {
                for (int b = j; b < j + 3; ++b) {
                    if (board[a][b] != '.') {
                        if (++boxFreq[board[a][b]] > 1) {
                            return false;
                        }
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<char>> board = {
        {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
        {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
        {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
        {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
        {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
        {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
        {'.', '.', '4', '.', '.', '.', '.', '.', '.'}
    };

    std::cout << isValidSudoku(board);

    std::cin.get();
}

