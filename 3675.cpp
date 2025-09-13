#include<iostream>

int minOperations(std::string s) {
    int op = 0;

    for (int i = 0; i < s.size(); ++i) {
        int temp = (26 - (s[i] - 'a')) % 26;
        op = std::max(op, temp);
    }

    return op;
}

int main() {
    std::string s = "sn";

    std::cout << minOperations(s);

    std::cin.get();
}

