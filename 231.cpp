#include<iostream>
#include<cmath>

bool isPowerOfTwo(int n) {
    if (n == 0) return false;
    long long pow_of = 0;

    long long i = 0;
    while (pow_of < n) {
        pow_of = pow(2, i);
        ++i;
    }

    return (n == pow_of);
}

int main() {
    int n = 16;

    std::cout << isPowerOfTwo(n);

    std::cin.get();
}
