#include<iostream>

int sumBase(int n, int k) {
    int sum = 0;
    int quotient = n;

    while(quotient != 0) {
        quotient = n / k;
        int remainder = n % k;
        n = quotient;
        sum += remainder;
    }

    return sum;
}

int main() {
    int n = 234;
    int k = 6;

    std::cout << sumBase(n, k);

    std::cin.get();
}
