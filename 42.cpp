#include<iostream>
#include<vector>

int trap(std::vector<int>& height) {
    int n = height.size();
    std::vector<int> rightMax(n);

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = std::max(height[i], rightMax[i + 1]);
    }

    int trappedWater = 0;
    int leftMax = 0;
    for (int i = 0; i < n; ++i) {
        leftMax = std::max(leftMax, height[i]);
        trappedWater += std::min(leftMax, rightMax[i]) - height[i];
    }

    return trappedWater;
}

int main() {
    std::vector<int> height = { 0, 3, 0, 1, 4, 0, 2 };

    std::cout << trap(height);

    std::cin.get();
}

