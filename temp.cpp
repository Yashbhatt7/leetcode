#include<iostream>

bool reorderedPowerOf2(int n) {
    int x = n;

    int a = x / 10;
    x = a % 10;
    std::cout << "x:" << x << "\n";
    // int b = 100;
    std::cout << "a:" << a << "\n";

    // std::cout << x << "\n";

    // while (x > 1) {
    //
    // }

    return 0;
}

int main() {
    int n = 421;

    reorderedPowerOf2(n);

    std::cin.get();
}


