#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    std::vector<int> kMostFreqVec;

    for (const auto& i : nums) {
        ++freq[i];
    }

    std::vector<std::pair<int, int>> vec(freq.begin(), freq.end());

    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

    int a = 1;
    for (const auto& i : vec) {
        kMostFreqVec.push_back(i.first);

        if (a == k) {
            break;
        }
        ++a;
    }

    return kMostFreqVec;
}

int main() {
    // std::vector<int> nums = { 1,1,1,2,2,3 };
    // std::vector<int> nums = { 1,2,1,2,1,2,3,1,3,2 };
    std::vector<int> nums = { 1,2 };
    int k = 2;

    std::vector<int> vec = topKFrequent(nums, k);

    for (const auto& i : vec) {
        std::cout << i << "\n";
    }

    std::cin.get();
}

