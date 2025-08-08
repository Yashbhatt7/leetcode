#include<iostream>
#include<vector>

int reinitializePermutation(int n) {
    int ops = 0;
    int i = 1;

    i = n / 2 + (i - 1) / 2;
    ++ops;

    while (i != 1) {
        if (i % 2 == 0)
            i /= 2;
        else
            i = n / 2 + (i - 1) / 2;
        ++ops;
    }

    return ops;
}

int main() {
    int n = 6;

    std::cout << reinitializePermutation(n);

    std::cin.get();
}
