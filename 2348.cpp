#include<iostream>
#include<vector>

long long zeroFilledSubarray(std::vector<int>& nums) {
    long long cal = 0;
    long long count = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            ++count;
        } else {
            cal += (count * (count + 1)) / 2;
            count = 0;
        }
    }

    cal += (count * (count + 1)) / 2;

    return cal;
}

int main() {
    std::vector<int> nums = { 0,0,0,2,0,0 };

    std::cout << zeroFilledSubarray(nums);

    // int a = 2 * (2 + 1) / 2;
    // std::cout << "\na: " << a;

    std::cin.get();
}

