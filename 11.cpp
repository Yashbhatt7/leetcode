#include<iostream>
#include<vector>

int maxArea(std::vector<int>& height) {
    int max = 0;
    int cal = 0;
    int len = height.size() - 1;
    int left = 0; int right = height.size() - 1;
    while (left < right) {
        if (height[left] < height[right])
            cal = height[left] * len;
        else
            cal = height[right] * len;

        if (max < cal)
            max = cal;

        if (height[left] < height[right]) {
            ++left;
            --len;
        } else {
            --right;
            --len;
        }
    }
    return max;
}

int main() {
    std::vector<int> height = { 1, 2, 4, 3 };

    std::cout << maxArea(height);

    std::cin.get();
}


