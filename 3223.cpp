#include<iostream>

int minimumLength(std::string s) {
    std::string temp = "";

    for(int i = 1; i < s.size(); ++i) {
        int right = i + 1;
        int left = i - 1;

        if(s[i] == s[left]) {
        }
        if(s[i] == s[right]) {
            s.erase(s.begin() + i);
        }
    }
    return s.size();
}

int main() {
    std::string str;

    std::cout << minimumLength(str);

    std::cin.get();
}

