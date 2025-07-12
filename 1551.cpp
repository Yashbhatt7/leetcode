#include<iostream>
#include<vector>

int minOperations(int n) {
    std::vector<int> vec;

    for(int i = 0; i < n; ++i) {
        vec.push_back((2 * i) + 1);
    }

    int itrs = 0;

    for(int i = n - 1; i > n/2; --i) {
        int target = vec[i] - n;
        itrs += target;
    }

    if(n % 2 == 0) {
        return itrs + 1;
    }

    return itrs;
}

int main() {
    int n = 4;

    std::cout << minOperations(n);

    std::cin.get();
}


