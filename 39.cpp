#include<iostream>
#include<vector>

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
    std::vector<std::vector<int>> vec;
    std::vector<int> temp;

    int sum = 0;
    int itr = 0;
    for (int i = 0; i < candidates.size(); ++i) {
        for (int j = 0; j < candidates.size(); ++j) {
            if () {

            }
            sum += candidates[itr];
        }
    }

    return vec;
}

int main() {
    std::vector<int> candidates = { 2,3,6,7 };
    int target = 7;

    std::vector<std::vector<int>> vec = combinationSum(candidates, target);
    std::cout << "[";
    for (const auto& i : vec) {
        std::cout << "[";
        for (const auto& j : i) {
            std::cout << j << " ";
        }
        std::cout << "]";
    }
    std::cout << "]";

    std::cin.get();
}

