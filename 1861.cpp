#include<iostream>
#include<vector>

std::vector<std::vector<char>> rotateTheBox(std::vector<std::vector<char>>& boxGrid) {
    std::vector<std::vector<char>> vec;

    std::cout << boxGrid.size();

    // for(int i = 0; i < boxGrid.size();) {
    //     // boxGrid[]
    // }

    return vec;
}

int main() {
    std::vector<std::vector<char>> boxGrid = {
        {"#","#","*",".","*","."},
        {"#","#","#","*",".","."},
        {"#","#","#",".","#","."},
    };

    rotateTheBox(boxGrid);

    std::cin.get();
}


