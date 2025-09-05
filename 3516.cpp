#include<iostream>

int findClosest(int x, int y, int z) {
    if (std::abs(x - z) < std::abs(y - z)) {
        return 1;
    } else if (std::abs(y - z) < std::abs(x - z)) {
        return 2;
    }

    return 0;
}

int main() {
    int x = 2;
    int y = 7;
    int z = 4;

    std::cout << findClosest(x, y, z);

    std::cin.get();
}

