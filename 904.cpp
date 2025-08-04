#include<iostream>
#include<vector>
#include<unordered_map>

int totalFruit(std::vector<int>& fruits) {
    std::vector<int> count;
    int t_count;
    int t_fruit = 0;
    int max = 0;

    std::unordered_map<int, int> fr_freq;

    for (const auto& i : fruits) {
        ++fr_freq[i];
    }

    for (int i = 0; i < fruits.size(); ++i) {

    }

    return t_fruit;
}

int main() {
    std::vector<int> fruits = { 1,2,1 };

    std::cout << totalFruit(fruits);

    std::cin.get();
}
