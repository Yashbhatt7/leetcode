#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<char>> rotateTheBox(std::vector<std::vector<char>>& boxGrid) {
    int left = 0;
    int right = boxGrid.size() - 1;

    for (int i = 0; i < boxGrid.size(); ++i) {
        while (left < right) {

        }
    }

    return boxGrid;
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


