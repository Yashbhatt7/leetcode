#include<iostream>
#include<vector>
#include<unordered_map>

int maxFrequencyElements(std::vector<int>& nums) {
    int nElements = 0;
    int maxFreq = 0;
    std::unordered_map<int, int> freq;

    for (const auto& i : nums) {
        ++freq[i];
        maxFreq = std::max(maxFreq, freq[i]);
    }

    for (const auto& i : freq) {
        if (i.second == maxFreq) {
            nElements += maxFreq;
        }
    }

    return nElements;
}

int main() {
    std::vector<int> nums = { 1,2,2,3,1,4 };

    std::cout << maxFrequencyElements(nums);

    std::cin.get();
}

