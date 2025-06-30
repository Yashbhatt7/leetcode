#include<iostream>
#include<vector>
#include<string>

std::string removeoccurrences(std::string s, std::string part) {
    size_t pos;
    while((pos = s.find(part)) != std::string::npos) {
        s.erase(pos, part.length());
    }
    return s;
}

int main() {
    std::string s = "daabcbaabcbc";
    std::string part = "abc";

    std::cout << removeoccurrences(s, part);

    std::cin.get();
}

