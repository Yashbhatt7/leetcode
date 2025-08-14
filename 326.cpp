#include<iostream>
#include<cmath>

bool isPowerOfThree(int n) {
    for(int i = 0; pow(3,i) <= n; i++){
        if(std::pow(3, i) == n) return true;
    }
    return false;
}

int main() {
    int n = 45;

    std::cout << isPowerOfThree(n);

    std::cin.get();
}
