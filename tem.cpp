#include<iostream>
#include <unordered_set>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>

std::string smallestEquivalentString(std::string s1, std::string s2, std::string baseStr) {
    std::string str;

    std::vector<std::vector<char>> vecPair(s1.size());
    std::unordered_map<char, std::unordered_set<char>> str_pair;

    for(int i = 0; i < s1.size(); ++i) {
        vecPair[i].push_back(s1[i]);
        vecPair[i].push_back(s2[i]);
    }

    for(const auto& pair : vecPair) {
        str_pair[pair[0]].insert(pair[1]);
        str_pair[pair[1]].insert(pair[0]);
    }

    for(const auto& [key, val] : str_pair) {
        std::cout << key << ": ";
        for(char neighbor : val) {
            std::cout << neighbor << " ";
        }
        std::cout << "\n";
    }

    return str;
}

int main() {
    std::string s1 = "parker";
    std::string s2 = "morris";
    std::string baseStr = "parser";

    smallestEquivalentString(s1, s2, baseStr);

    std::cin.get();
}


