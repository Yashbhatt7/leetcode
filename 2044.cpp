#include<iostream>
#include<vector>
#include<algorithm>

int countMaxOrSubsets(std::vector<int>& nums) {
    int count = 0;
    int max = 0;
    int sub_max = 0;
    std::vector<std::vector<int>> subset = {{}};

    for(const auto& num : nums) {
        max |= num;
    }

    for(const auto& num : nums) {
        int size = subset.size();
        for(int i = 0; i < size; ++i) {
            std::vector<int> new_subset = subset[i];
            new_subset.push_back(num);
            subset.push_back(new_subset);
        }
    }

    for(const auto& a : subset) {
        for(const auto& i : a) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    for(const auto& i : subset) {
        sub_max = 0;
        for(const auto& n : i) {
            sub_max |= n;
        }

        if(sub_max == max) {
            ++count;
        }
    }

    return count;
}

using namespace std;

int main() {
    vector<int> nums = { 2, 2, 2 };

    std::cout << countMaxOrSubsets(nums);
    // countMaxOrSubsets(nums);

    return 0;
}

