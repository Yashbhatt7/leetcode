#include<iostream>
#include<vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::vector<int> productExceptSelf(nums.size(), 0);
    bool hasZero = false;
    int finalProduct = 1;
    int countZeros = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            hasZero = true;
            ++countZeros;
            continue;
        }
        finalProduct *= nums[i];
    }

    if (countZeros > 1) {
        return productExceptSelf;
    }

    if (hasZero) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                productExceptSelf[i] = finalProduct;
            }
        }
    }
    else {
        for (int i = 0; i < nums.size(); ++i) {
            productExceptSelf[i] = finalProduct / nums[i];
        }
    }

    return productExceptSelf;
}

int main() {


    std::cin.get();
}

