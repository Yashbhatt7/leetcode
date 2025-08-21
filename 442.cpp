#include<iostream>
#include<vector>
#include<unordered_map>

std::vector<int> findDuplicates(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    std::vector<int> vec;

    for (const auto& i : nums) {
        ++freq[i];
    }

    for (const auto& i : freq) {
        if (i.second > 1) {
            vec.push_back(i.first);
        }
    }

    return vec;
}

int main() {


    std::cin.get();
}
