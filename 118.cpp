#include<iostream>
#include<vector>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> result(numRows);

    if(numRows == 1) {
        return {{1}};
    } else if (numRows == 2) {
        return {{1}, {1, 1}};
    }

    result[0].push_back(1);
    result[1].push_back(1);
    result[1].push_back(1);

    for(int i = 2; i < numRows; ++i) {
        result[i].push_back(1);
        for(int j = 1; j < result[i - 1].size(); ++j) {
            int sum = result[i - 1][j - 1] + result[i - 1][j];
            result[i].push_back(sum);
        }
        result[i].push_back(1);
    }

    return result;
}

int main() {
    int numRows = 5;

    generate(numRows);

    std::cin.get();
}


