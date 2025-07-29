#include<algorithm>
#include<iostream>
#include<vector>

int binary_search(std::vector<int>& n, int target, int left, int right) {
    int index;

    while (left <= right) {
        int middle = (right - left)/2 + left;

        if(n[middle] == target) {
            return middle;
        }
        else if(target > n[middle]) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> n = { -1,0,3,5,9,12 };
    int target = 9;

    int left = 0;
    int right = n.size() - 1;

    std::cout << binary_search(n, target, left, right);

    std::cin.get();
}
