#include<iostream>
#include<vector>

int singleNumber(std::vector<int>& nums) {
    int res = 0;
    for (const auto& i : nums) {
        res ^= i;
    }

    return res;
}

int main() {
    std::vector<int> nums = { 2,2,1 };

    std::cout << singleNumber(nums) << "\n";

    //learnings
    int temp = 0;
    int a = temp ^ 4;
    temp = a ^ 2;

    std::cout << temp << "\n";

    temp ^= 2;

    std::cout << temp << "\n";

    std::cin.get();
}

