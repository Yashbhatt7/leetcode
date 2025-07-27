#include<iostream>
#include<vector>

int countHillValley(std::vector<int>& nums) {
    std::vector<int> vec;
    int res = 0;

    for(int i = 0; i < nums.size() - 1; ++i) {
        if(nums[i] != nums[i + 1]) {
            vec.push_back(nums[i]);
        }
    }
    vec.push_back(nums[nums.size() - 1]);

    for(int i = 1; i < vec.size() - 1; ++i) {
        if((vec[i] > vec[i + 1] && vec[i] > vec[i - 1]) || (vec[i] < vec[i + 1] && vec[i] < vec[i - 1])) {
            ++res;
        }
    }

    return res;
}

int main() {
    std::vector<int> nums = { 2,4,1,1,6,5 };

    std::cout << countHillValley(nums);

    std::cin.get();
}
