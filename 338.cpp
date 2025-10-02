#include<iostream>
#include<vector>

std::vector<int> countBits(int n) {
    std::vector<int> vec(n + 1);
    vec[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int count = 0;
        int num = i;
        while (num > 0) {
            num = num & (num - 1);
            ++count;
        }
        vec[i] = count;
    }

    return vec;
}

int main() {
    int n = 5;

    std::vector<int> vec = countBits(n);

    for (int num : vec) {
        std::cout << num << ", ";
    }

    std::cin.get();
}

