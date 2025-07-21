#include<iostream>

std::string makeFancyString(std::string s) {
    std::string result = "";
    int count = 0;

    for(int i = 0; i < s.size(); ++i) {

        if(s[i] == s[i + 1]) {
            if(count < 1) {
                result += s[i];
                ++count;
            }
        }
        else {
            result += s[i];
            count = 0;
        }
    }

    return result;
}

int main() {
    std::string s = "aab";

    std::cout << makeFancyString(s);

    std::cin.get();
}


