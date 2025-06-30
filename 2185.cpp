#include<iostream>
#include<vector>
#include<string>

int prefixCount(std::vector<std::string>& words, std::string pref) {
    int count = 0;

    for(int i = 0; i < words.size(); ++i) {
        if(pref == words[i].substr(0, pref.size())) {
            ++count;
        }
    }

    return count;
}

int main() {
    std::vector<std::string> words {
        "pay",
        "attention",
        "practice",
        "attend",

        /*"pay",*/
    };
    std::string pref = "at";

    std::cout << prefixCount(words, pref);

    std::cin.get();
}





