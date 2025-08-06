#include<iostream>
#include<vector>

int numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets) {
    int idx = 0;
    int remaining = 0;
    int check = 0;

    for (int i = 0; i < baskets.size() && idx < fruits.size(); ++i) {
        std::cout << "idx: " << idx << "\n";
        if (fruits[idx] <= baskets[i]) {
            baskets[i] = -1;
            ++idx;
            // std::cout << "i: " << i << "\n";
            i = -1;
        }

        // std::cout << "i: " << i << "\n";

        if (idx == check && i >= (baskets.size() - 1)) {
            ++check;
            ++idx;
            i = -1;
        }
    }

    for(int i : baskets) {
        if (i != -1) {
            ++remaining;
        }
    }

    return remaining;
}

int main() {
    // std::vector<int> fruits = { 4,2,5 };
    // std::vector<int> baskets = { 3,5,4 };

    // std::vector<int> fruits = { 3,6,1 };
    // std::vector<int> baskets = { 6,4,7 };

    std::vector<int> fruits = { 38,65,8 };
    std::vector<int> baskets = { 27,10,47 };

    // std::vector<int> fruits = { 41,43,94 };
    // std::vector<int> baskets = { 39,10,47 };

    // std::vector<int> fruits = { 98,63};
    // std::vector<int> baskets = { 67,85 };

    std::cout << numOfUnplacedFruits(fruits, baskets);

    std::cin.get();
}


