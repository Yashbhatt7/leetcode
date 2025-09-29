#include<iostream>
#include<vector>

int trap(std::vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    long long trappedWater = 0;
    int leftMax = 0;
    int rightMax = 0;
    while (left < right) {
        if (height[right] < height[left]) {
            rightMax = std::max(rightMax, height[right]);
            trappedWater += rightMax - height[right];
            --right;
        } else {
            leftMax = std::max(leftMax, height[left]);
            trappedWater += leftMax - height[left];
            ++left;
        }
    }

    return trappedWater;
}

int main() {
    std::vector<int> height = { 0, 3, 0, 1, 4, 0, 2 };

    std::cout << trap(height);

    std::cin.get();
}

