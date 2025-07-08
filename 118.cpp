#include<iostream>
#include<vector>

std::vector<std::vector<int>> generate(int numRows) {
    if(numRows == 0) return {};

    std::vector<std::vector<int>> vec(numRows);

    vec[0].push_back(1);

    if(numRows == 1) return vec;

    vec[1].push_back(1);
    vec[1].push_back(1);

    for(int i = 2; i < numRows; ++i) {
        vec[i].push_back(1);
        for(int j = 1; j < i; ++j) {
            int sum = vec[i - 1][j - 1] + vec[i - 1][j];
            vec[i].push_back(sum);
        }
        vec[i].push_back(1);
    }

    return vec;
}

int main() {
    int numRows = 5;

    std::vector<std::vector<int>> vec = generate(numRows);

    for(const auto& i : vec) {
        std::cout << "[ ";
        for(int i : i) {
            std::cout << i << ", ";
        }
        std::cout << "], ";
    }

    std::cin.get();
}


