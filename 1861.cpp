#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<char>> rotateTheBox(std::vector<std::vector<char>>& boxGrid) {
    std::cout << boxGrid.size();

    for (int i = 0; i < boxGrid.size(); ++i) {
        for (int j = 0; j < boxGrid[i].size() - 1; ++j) {
            if (boxGrid[i][j] == '*') {
                std::cout << "how: " << i << "\n";
                break;
            }
            if(boxGrid[i][j] == '#' && boxGrid[i][j + 1] == '.') {
                std::swap(boxGrid[i][j], boxGrid[i][j + 1]);
                j = j - 1;
                continue;
            } else if(boxGrid[i][j] == '#' && boxGrid[i][j + 1] == '#') {
                continue;
            } else {
                break;
            }
        }
    }

    for (const auto& i : boxGrid) {
        for (const auto& x : i) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }

    return {{}};
}

int main() {
    std::vector<std::vector<char>> boxGrid = {
        {'#','#','*','.','*','.'},
        {'#','#','#','*','.','.'},
        {'#','#','#','.','#','.'},
    };

    rotateTheBox(boxGrid);

    std::cin.get();
}


