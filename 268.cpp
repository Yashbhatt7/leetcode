#include<iostream>
#include<vector>
#include<algorithm>

int missingNumber(std::vector<int>& nums) {
    int num = 0;
    int sum1 = 0;
    int sum2 = 0;

    int temp = 1;
    for(int i = 0; i < nums.size(); ++i) {
        sum1 = temp + sum1;
        sum2 = nums[i] + sum2;
        ++temp;
    }

    std::cout << sum1 << "\n";
    std::cout << sum2 << "\n";

    num = sum1 - sum2;

    return num;
}

int main() {
    // std::vector<int> nums = { 9,6,4,2,3,5,7,0,1 };
    std::vector<int> nums = { 0, 1 };
    // std::vector<int> nums = { 3,0,1 };

    std::cout << missingNumber(nums);
    // missingNumber(nums);

    std::cin.get();
}
