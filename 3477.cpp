#include<iostream>
#include<vector>

int numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets) {
    for (int i = 0; i < fruits.size(); ++i) {
        for (int j = 0; j < baskets.size(); ++j) {
            if (fruits[i] <= baskets[j]) {
                baskets.erase(baskets.begin() + j);
                fruits.erase(fruits.begin() + i);
                --i;
                --j;
                break;
            }
        }
    }

    return baskets.size();
}

int main() {
    std::vector<int> fruits = { 4,2,5 };
    std::vector<int> baskets = { 3,5,4 };

    std::cout << numOfUnplacedFruits(fruits, baskets);

    std::cin.get();
}


