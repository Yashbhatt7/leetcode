#include<iostream>
#include<vector>

int kthFactor(int n, int k) {
    std::vector<int> factors = {};

    for(int i = 1; i <= n; ++i) {
        if(n % i == 0) {
           factors.push_back(i);
        }
    }

    // std::cout << factors.size();

    if(factors.size() >= k) {
        // std::cout << factors.size();
        return factors[k - 1];
    }


    return -1;
}

int main() {
    int n = 7;
    int k = 2;

    std::cout << n % 1;

    std::cout << kthFactor(n, k);

    std::cin.get();
}


