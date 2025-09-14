#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

bool isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}

std::string getLowerWord(const std::string& s) {
    std::string str = s;
    for (char& i : str) {
        i = tolower(i);
    }
    return str;
}

std::string vowel_change(const std::string& s) {
    std::string str;
    str.reserve(s.size());

    for (const char& ch : s) {
        if (isVowel(ch)) {
            str.push_back('*');
        } else {
            str.push_back(tolower(ch));
        }
    }
    return str;
}

std::vector<std::string> spellchecker(std::vector<std::string>& wordlist, std::vector<std::string>& queries) {
    std::vector<std::string> correct;
    std::unordered_set<std::string> lookUpWordList(wordlist.begin(), wordlist.end());
    std::unordered_map<std::string, std::string> allCaseMap;
    std::unordered_map<std::string, std::string> vowelMap;

    for (const std::string& w : wordlist) {
        std::string vowelChange = vowel_change(w);
        std::string lower = getLowerWord(w);

        if (!allCaseMap.count(lower)) {
            allCaseMap[lower] = w;
        }
        if (!vowelMap.count(vowelChange)) {
            vowelMap[vowelChange] = w;
        }
    }

    for (const std::string& q : queries) {
        if (lookUpWordList.count(q)) {
            correct.push_back(q);
        } else {
            std::string lower = getLowerWord(q);
            std::string vowelChange = vowel_change(q);

            if (allCaseMap.count(lower)) {
                correct.push_back(allCaseMap[lower]);
            } else if (vowelMap.count(vowelChange)) {
                correct.push_back(vowelMap[vowelChange]);
            } else {
                correct.push_back("");
            }
        }
    }

    return correct;
}

int main() {
    std::vector<std::string> wordlist = { "KiTe","kite","hare","Hare" };
    std::vector<std::string> queries = { "kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto" };

    std::vector<std::string> vec = spellchecker(wordlist, queries);

    for (const auto& i : vec) {
        std::cout << i << ", ";
    }

    std::cin.get();
}

