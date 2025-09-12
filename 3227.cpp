#include<iostream>

bool doesAliceWin(std::string s) {
    for (const auto& ch : s) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
    }
    return false;
}

int main() {
    std::string s = "leetcode";

    std::cout << doesAliceWin(s);

    std::cin.get();
}

