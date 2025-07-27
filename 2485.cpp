#include<iostream>

int pivotInteger(int n) {
    int sum = 0;
    int set_i = (n/2) + 1;
    int sum1 = 0;

    for(int i = 1; i <= n; ++i) {
        sum += i;
        for(int j = i; j <= n; ++j) {
            sum1 += j;
        }
        if(sum == sum1) {
            return i;
        }
        sum1 = 0;
    }

    return -1;
}

int main() {
    int n = 8;
    std::cout << pivotInteger(n);

    std::cin.get();
}
