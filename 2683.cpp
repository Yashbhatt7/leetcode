#include<iostream>
#include<vector>

bool doesValidArrayExist(std::vector<int>& derived) {
    int n = derived.size();
    std::vector<int> original(derived.size());

    for(int i = 0; i < n - 1; ++i) {
        original[i + 1] = derived[i] ^ original[i];
    }

    return derived[n - 1] == (original[n - 1] ^ original[n - 1]);
}

int main() {
    std::vector<int> derived = { 1, 1, 0 };

    std::cout << doesValidArrayExist(derived);

    std::cin.get();
}


