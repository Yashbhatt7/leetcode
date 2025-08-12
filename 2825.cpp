#include<iostream>

bool canMakeSubsequence(std::string str1, std::string str2) {
    int i = 0;
    int count = 0;
    int idx = 0;
    while (i < str1.size()) {
        if (str1[i] == str2[idx]) {
            ++count;
            ++idx;
        } else if (++str1[i] == str2[idx]) {
            ++count;
            ++idx;
            --str1[i];
        } else if (--str1[i] == 'z' && str2[idx] == 'a') {
            ++count;
            ++idx;
        }
        ++i;
    }

    return (count == str2.size());
}

int main() {
    std::string str1 = "zc";
    std::string str2 = "ad";


    std::cout << canMakeSubsequence(str1, str2);

    // std::cout << "ohh: " << ++str1[0] << "\n";

    std::cin.get();
}


