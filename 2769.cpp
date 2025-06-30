#include<iostream>

int theMaximumAchievableX(int num, int t) {
    int x = num + t + t;

    return x;
}

int main() {
    int num = 3, t = 2;

    std::cout << theMaximumAchievableX(num, t);

    std::cin.get();
}
