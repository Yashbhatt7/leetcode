#include<iostream>
#include<vector>

std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence) {


    for (int i = 0; i < dictionary.size(); ++i) {
        for (int j = 0; j < sentence.size(); ++i) {

        }
    }

    return "";
}

int main() {
    std::vector<std::string> dictionary = { "cat","bat","rat" };
    std::string sentence = "the cattle was rattled by the battery";

    std::cout << replaceWords(dictionary, sentence);

    std::cin.get();
}

