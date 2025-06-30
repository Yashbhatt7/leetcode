#include<iostream>
#include<map>
#include<vector>

int removeDuplicates(std::vector<int>& nums) {
    int temp = nums[0];

    for(int i = 0; i < nums.size() - 1;) {
        if(temp == nums[i + 1]) {
            nums.erase(nums.begin() + i);
        }
        else {
            temp = nums[i + 1];
            ++i;
        }
    }

    // for(int i : nums) {
    //     std::cout << i << " ";
    // }

    return nums.size();
}

int main() {
    // std::vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    std::vector<int> nums = { 1,1,2 };

    std::cout << removeDuplicates(nums);

    std::cin.get();
}


