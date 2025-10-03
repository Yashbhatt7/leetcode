#include<iostream>
#include<vector>

std::vector<int> resultsArray(std::vector<int>& nums, int k) {
    std::vector<int> vec(nums.size() - k + 1);

    for (int i = 0; i <= nums.size() - k; ++i) {
        bool check = false;

        for (int j = i; j < i + k - 1; ++j) {
            if (nums[j] + 1 != nums[j + 1]) {
                check = true;
                break;
            }
        }

        if (check) vec[i] = -1;
        else vec[i] = nums[i + k - 1];
    }

    return vec;
}

int main() {
    std::vector<int> nums = { 1,2,3,4,3,2,5 };
    int k = 3;

    std::vector<int> vec = resultsArray(nums, k);

    for (int i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}

