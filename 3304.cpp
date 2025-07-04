#include<iostream>

char kthCharacter(int k) {
    std::string str = "a";

    std::string temp = str;

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
