#include<iostream>
#include<vector>

std::vector<int> sumZero(int n) {
   std::vector<int> vec;
    int element = -n/2;

    for (int i = 0; i < n; ++i) {
        if (n % 2 == 0 && element == 0) {
            ++element;
        }
        vec.push_back(element);
        ++element;
    }

    return vec;
}

int main() {
    int n = 5;

    std::cin.get();
}

