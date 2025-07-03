#include<iostream>

char kthCharacter(int k) {
    char ch = 'a';

    std::string str = "a";

    // if(str.size() < k) {
    //     return kthCharacter(k);
    // }

    std::string temp = "zzzz";
    char c;
    // str.append(temp);

    temp = str;

    while(str.size() < k) {
        for(int j = 0; j < temp.size(); ++j) {
            ++temp[j];
        }
        str.append(temp);
        temp = str;
    }

    return str[k - 1];
}

int main() {
    int k = 5;
    kthCharacter(k);

    std::cin.get();
}
