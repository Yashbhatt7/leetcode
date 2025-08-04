#include<iostream>
#include<vector>

int findNumbers(std::vector<int>& nums) {
    int total_evens = 0;

    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        count = 0;
        while (nums[i]) {
            nums[i] /= 10;
            ++count;
        }
        if (count % 2 == 0) {
            ++total_evens;
        }
    }

    return total_evens;
}

int main() {
    std::vector<int> nums = { 12,345,2,6,7896 };

    std::cout << findNumbers(nums);

    std::cin.get();
}
