#include<iostream>

int subtractProductAndSum(int n) {
    int sum = 0;
    int mul = 1;

    while (n > 0) {
        std::cout << n % 10;
        int digit = n % 10;
        mul *= digit;
        sum += digit;
        n /= 10;
    }

    return mul - sum;
}

int main() {
    int n = 234;

    std::cout << subtractProductAndSum(n);

    std::cin.get();
}
