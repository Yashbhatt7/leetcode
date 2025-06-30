#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int countPrefixSuffixPairs(std::vector<std::string>& words) {
    int count = 0;

    for(int i = 0; i < words.size(); ++i) {
        for(int j = i; j < words.size(); ++j) {
            if(i != j && words[i].size() <= words[j].size()) {
                int index = words[j].size() - words[i].size();
                std::string sub = words[j].substr(index, words[i].size());

                if(words[i] == sub) {
                    std::string sub2 = words[j].substr(0, words[i].size());
                    if(words[i] == sub2) {
                        ++count;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    std::vector<std::string> words {
        /*"a",*/
        /*"c",*/
        /*"cacaa",*/
        /*"ccccc",*/

        /*"pa",*/
        /*"papa",*/
        /*"ma",*/
        /*"mama",*/

        "a",
        "aba",
        "ababa",
        "aa",

        /*"abab",*/
        /*"ab",*/

    };

    std::cout << countPrefixSuffixPairs(words);






    /*std::string str = "adsf";*/
    /*std::string str2 = "adsfadsf";*/
    /**/
    /*if(str == str2) {*/
    /*    std::cout << "sameo";*/
    /*} else {*/
    /*    std::cout << "memo";*/
    /*}*/

    std::cin.get();
}
