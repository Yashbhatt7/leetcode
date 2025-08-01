#include<iostream>
#define b(n) (n%2 == 0 ? true : false)

bool divisorGame(int n) {
    return b(n);
}

int main () {
    std::cout << divisorGame(2);

    std::cin.get();
}
