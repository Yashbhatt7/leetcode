#include<iostream>
#include<vector>

int maxArea(std::vector<int>& height) {
    int maxArea = 0;

    int left = 0;
    int right = height.size() - 1;
    while (left < right) {
        int curArea = (right - left) * std::min(height[left], height[right]);

        if (height[left] < height[right]) ++left;
        else --right;

        maxArea = std::max(maxArea, curArea);
    }

    return maxArea;
}

int main() {
    std::vector<int> height = { 1,8,6,2,5,4,8,3,7 };

    std::cout << maxArea(height);

    std::cin.get();
}


