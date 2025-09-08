#include<iostream>
#include<vector>

bool check(int x) {
    while (x > 0) {
        if (x % 10 == 0) {
            return false;
        }
        x /= 10;
    }

    return true;
}

std::vector<int> getNoZeroIntegers(int n) {
    if (n == 1) return {};

    for (int a = 1; a < n; ++a) {
        int b = n - a;
        if (check(a) && check(b)) {
            return {a, b};
        }
    }

    return {};
}

int main() {


    std::cin.get();
}

