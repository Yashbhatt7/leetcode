#include<iostream>
#include<vector>

bool isArraySpecial(std::vector<int>& nums) {
    for(int i = 1; i < nums.size(); ++i) {
        if((nums[i - 1] % 2 == 0) && (nums[i] % 2 == 0)) {
            return false;
        }
        else if((nums[i - 1] % 2 != 0) && (nums[i] % 2 != 0)) {
            return false;
        }
    }

    return true;
}

int main() {
    /*std::vector<int> vec { 2, 1, 4 };*/
    std::vector<int> vec { 4, 3, 1, 6 };
    std::cout << isArraySpecial(vec);

    std::cin.get();
}

