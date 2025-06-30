#include<iostream>
#include<string>

std::string canBeValid(std::string s, std::string locked) {
    std::string str = "";
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == ')' && locked[i] == '0') {
            s[i] = '(';
        }
    }
    return s;
}

int main() {
    std::string str = "))()))";
    std::string locked = "010100";

    std::cout << canBeValid(str, locked);

    std::cin.get();
}


