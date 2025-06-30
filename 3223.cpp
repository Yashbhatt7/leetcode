#include<iostream>

int minimumLength(std::string s) {

    for(int i = 1; i < s.size() - 1; ++i) {
        int right = i;
        int left = i;

        if(s[i] != s[left - 1]) {
            if(s[i] == s[right + 1]) {
                s.erase(s.begin() + i);
            }
        }
    }
    return s.size();
}

int main() {
    std::string str;

    std::cout << minimumLength(str);

    std::cin.get();
}

