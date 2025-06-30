#include<iostream>
#include<vector>
#include<unordered_map>

int numEquivDominoPairs(std::vector<std::vector<int>>& dominoes) {
    std::unordered_map<int, int> freq;
    int count = 0;

    for (const auto& d : dominoes) {
        int a = d[0];
        int b = d[1];
        int key = a < b ? a * 10 + b : b * 10 + a;

        count += freq[key];
        freq[key]++;
    }

    return count;
}

int main() {
    // std::vector<std::vector<int>> var = { {1, 2}, {2, 1}, {3, 4}, {5, 6} };
    std::vector<std::vector<int>> var = { {1, 2}, {1, 2}, {1, 1}, {1, 2}, {2, 2} };

    std::cout << numEquivDominoPairs(var);

    std::cin.get();
}


