#include<iostream>
#include<vector>
#include<unordered_map>

int totalFruit(std::vector<int>& fruits) {
    int max = 0;
    int left = 0;
    std::unordered_map<int, int> freq;

    for (int right = 0; right < fruits.size(); ++right) {
        ++freq[fruits[right]];

        while (freq.size() > 2) {
            --freq[fruits[left]];
            if (freq[fruits[left]] == 0) {
                freq.erase(fruits[left]);
            }
            ++left;
        }

        if (max < right - left + 1) {
            max = right - left + 1;
        }
    }

    return max;
}

int main() {
    std::vector<int> fruits = { 3,3,3,1,2,1,1,2,3,3,4 };

    std::cout << totalFruit(fruits);

    std::cin.get();
}
