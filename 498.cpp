#include<iostream>
#include<vector>

std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& mat) {
    std::vector<int> vec;
    int row = mat.size();
    int col = mat[0].size();
    int n = row * col;

    bool a = true;
    bool b = false;
    int i = 0;
    int j = 0;
    for (int c = 0; c < n; ++c) {
        vec.push_back(mat[i][j]);

        // Down
        if (a) {
            if (i == 0 || j == col - 1) {
                if (j == col - 1) ++i;
                else ++j;
                a = false;
                b = true;
            } else {
                ++j;
                --i;
            }
            continue;
        }
        // up
        if (b) {
            if (j == 0 || i == row - 1) {
                if (i == row - 1) ++j;
                else ++i;
                b = false;
                a = true;
            } else {
                ++i;
                --j;
            }
            continue;
        }
    }

    return vec;
}

int main() {
    std::vector<std::vector<int>> mat = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };

    std::vector<int> vec = findDiagonalOrder(mat);

    for (const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}

