#include<iostream>
#include<vector>

class CombinationIterator {
public:
    CombinationIterator(std::string characters, int combinationLength) {

    }

    std::string next() {
        std::string str = "";
        return str;
    }

    bool hasNext() {
        bool check = false;
        return check;
    }
};

int main() {
    std::string characters = "abc";
    int combinationLength  = 2;

    CombinationIterator* obj = new CombinationIterator(characters, combinationLength);

    std::cout << obj->next() << "\n";
    std::cout << obj->hasNext() << "\n";
    std::cout << obj->next() << "\n";
    std::cout << obj->hasNext() << "\n";
    std::cout << obj->next() << "\n";
    std::cout << obj->hasNext() << "\n";

    delete obj;

    std::cin.get();
}


