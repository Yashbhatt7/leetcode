#include<iostream>

int fib(int n) {
    if (n < 2) return n;

    long prev1 = 0, prev2 = 1, cur = 0;
    for (int i = 2; i <= n; ++i) {
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }

    return cur;
}

int main() {
    int n = 4;

    std::cout << fib(n);

    std::cin.get();
}

