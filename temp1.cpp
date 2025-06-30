#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

int cnt(std::string str) {
    int count = 0;
    std::unordered_map<char, int> a;

    for(char ch : str) {
        ++a[ch];
    }

    int i = 0;
    for(auto ch : a) {
        std::cout << ch.first << "\n";
        ++count;
        ++i;
    }

    return count;
}

int main() {
    std::string str { "aaccccaaacbbbbaaccccbbdddd" };

    std::cout << cnt(str);

    std::cin.get();
}


