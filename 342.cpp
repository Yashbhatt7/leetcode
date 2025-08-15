#include<iostream>
#include<cmath>

bool isPowerOfFour(int n) {
    long long num = 1;
    int i = 0;
    while (num <= n) {
        num = std::pow(4, i);
        if (num == n) return true;
        ++i;
    }
    return false;
}

int main() {
    int n = 16;

    std::cout << isPowerOfFour(n);

    std::cin.get();
}


