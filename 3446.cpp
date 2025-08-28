#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<int>> sortMatrix(std::vector<std::vector<int>>& grid) {
    std::vector<std::vector<int>> vec(grid.size(), std::vector<int>(grid.size(), 0));
    int op = 2 * grid.size() - 1;
    int r = grid.size();

    int i = grid.size();
    int j = 0;
    int trv = 0;

    for (int k = 0; k < op/2 + 1; ++k) {
        std::vector<int> temp;
        trv = i - 1;
        j = 0;
        do {
            temp.push_back(grid[trv][j]);
            ++trv;
            ++j;
        } while (trv != r);
        std::sort(temp.begin(), temp.end(), std::greater<int>());

        trv = i - 1;
        j = 0;
        for (int idx = 0; idx < temp.size(); ++idx) {
            vec[trv][j] = temp[idx];
            ++trv;
            ++j;
        }
        --i;
    }

    i = 0;
    j = 2;
    for (int k = 0; k < op/2; ++k) {
        std::vector<int> temp1;
        trv = j - 1;
        i = 0;
        do {
            temp1.push_back(grid[i][trv]);
            ++trv;
            ++i;
        } while (trv != r);
        std::sort(temp1.begin(), temp1.end());

        trv = j - 1;
        i = 0;
        for (int idx = 0; idx < temp1.size(); ++idx) {
            vec[i][trv] = temp1[idx];
            ++trv;
            ++i;
        }
        ++j;
    }

    return vec;
}

int main() {
    std::vector<std::vector<int>> grid = {
        { 1, 7, 3 },
        { 9, 8, 2 },
        { 4, 5, 6 },
    };

    sortMatrix(grid);

    std::cin.get();
}

