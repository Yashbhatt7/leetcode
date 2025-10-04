#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>

std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence) {
    std::sort(dictionary.begin(), dictionary.end(),
        [](const std::string& a, const std::string& b) {
        return a.size() < b.size(); // shortest first
        });
    std::vector<std::string> fetchWords;
    std::istringstream iss(sentence);
    std::string word;
    while (iss >> word) {
        fetchWords.push_back(word);
    }

    for (int j = 0; j < fetchWords.size(); ++j) {
        for (int i = 0; i < dictionary.size(); ++i) {
            int len = dictionary[i].size();
            if (fetchWords[j].compare(0, len, dictionary[i]) == 0) {
                fetchWords[j] = dictionary[i];
                break;
            }
        }
    }

    std::string finalStr = "";
    finalStr.reserve(sentence.size());
    for (const auto& i : fetchWords) {
        finalStr += i;
        finalStr += ' ';
    }
    finalStr.pop_back();
    return finalStr;
}

int main() {
    std::vector<std::string> dictionary = { "cat","bat","rat" };
    std::string sentence = "the cattle was rattled by the battery";

    std::cout << replaceWords(dictionary, sentence);

    std::cin.get();
}

