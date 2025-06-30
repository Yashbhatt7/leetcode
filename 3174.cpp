#include<cctype>
#include<iostream>
#include<string>

std::string clearDigits(std::string s) {
    int index = 0;
    for(int i = 0; i < s.size();) {
        if(isdigit(s[i])) {
            s.erase(i, 1);
            s.erase(i - 1, 1);
            /*std::cout << i << "\n";*/
            i = i - 1;
            /*std::cout << i << "\n";*/
            continue;
        }
        else {
            ++i;
        }
    }

    /*std::cout << s;*/

    return s;
}

int main() {
    std::string input_s = "abc";
    /*std::string input_s1 = "cb34";*/

    std::cout << clearDigits(input_s);
    /*std::cout << clearDigits(input_s1);*/

    std::cin.get();
}

