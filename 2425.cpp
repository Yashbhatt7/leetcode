#include<iostream>
#include<vector>

int xorAllNums(std::vector<int>& nums1, std::vector<int>& nums2) {
    int xor_result = 0;
    int xor1 = 0;
    int xor2 = 0;

    for (const auto& i : nums1) {
        xor1 ^= i;
    }
    for (const auto& i : nums2) {
        xor2 ^= i;
    }
    if (nums2.size() % 2 == 1) { xor_result ^= xor1; }

    if (nums1.size() % 2 == 1) { xor_result ^= xor2; }

    return xor_result;
}

int main() {


    std::cin.get();
}
