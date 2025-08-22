#include<iostream>
#include<vector>

int minimumArea(std::vector<std::vector<int>>& grid) {
    int min_row = grid.size();
    int min_col = grid[0].size();
    int max_row = -1;
    int max_col = -1;

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 1) {
                max_col = std::max(max_col, j);
                min_col = std::min(min_col, j);
                min_row = std::min(min_row, i);
                max_row = std::max(max_row, i);
            }
        }
    }

    if (max_row == -1) {
        return 0;
    }

    return (max_row - min_row + 1) * (max_col - min_col + 1);
}

int main() {


    std::cin.get();
}
