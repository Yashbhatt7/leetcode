#include<iostream>
#include<vector>

std::vector<std::string> divideString(std::string s, int k, char fill) {
    std::vector<std::string> str;
    std::string n_str;
    int size = s.size();

    for(int i = 0; i < size; ++i) {
        n_str += s[i];

        if(n_str.size() == k) {
            str.push_back(n_str);
            n_str.clear();
        }
    }

    if(!n_str.empty()) {
        while(n_str.size() != k) {
            n_str += fill;
        }
        str.push_back(n_str);
    }

    return str;
}

int main() {
    std::string s = "abcdefghij";
    int k = 3;
    char fill = 'x';

    std::vector<std::string> str = divideString(s, k, fill);

    for(std::string& s : str) {
        std::cout << s << " ";
    }

    std::cin.get();
}


