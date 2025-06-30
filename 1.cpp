#include<iostream>
#include<vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> vec;

    for(int i = 0; i < nums.size() - 1; ++i) {
        for(int j = i + 1; j < nums.size(); ++j) {
            if((nums[i] + nums[j]) == target) {
                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }

    return vec;
}

int main() {
    std::vector<int> vec { 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> vec2 =  twoSum(vec, target);

    for(int i : vec2) {
        std::cout << i << " ";
    }

    std::cin.get();
}


