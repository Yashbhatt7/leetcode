#include<iostream>
#include<vector>
#include<map>
#include<set>

std::vector<double> medianSlidingWindow(std::vector<int>& nums, int k) {
    std::map<int, int> sortedKeys;
    std::multiset<int> s;
    std::vector<double> vecOfMedians(nums.size() - 2);

    int count = 0;
    for (int i : nums) {
        ++sortedKeys[i];
        ++count;
        if (count == k) break;
    }

    if (count % 2 != 0) {
        --sortedKeys[sortedKeys.begin()->first];

        auto it = sortedKeys.begin();
        std::advance(it, sortedKeys.size() / 2);
        vecOfMedians[0] = it->first;

        std::cout << "vecOfMedians: " << vecOfMedians[0] << "\n";
    } else {
        --sortedKeys[sortedKeys.begin()->first];

        auto it = sortedKeys.begin();
        std::advance(it, sortedKeys.size() / 2);
        std::cout << it->first << "\n";

        auto it1 = sortedKeys.begin();
        std::advance(it1, (sortedKeys.size() / 2) - 1);
        std::cout << it1->first << "\n";

        int med = (it->first + it1->first) / 2;
        vecOfMedians[0] = med;
        std::cout << vecOfMedians[0] << "\n";
    }

    for (int i = 1; i < ) {

    }

    return vecOfMedians;
}

int main () {
    std::vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
    int k = 4;

    medianSlidingWindow(nums, k);

    std::cin.get();
}

