#include<iostream>
#include <unordered_map>
#include<vector>

struct Node {
    std::string name;
    std::unordered_map<std::string, Node*> children;
    bool marked = false;
};



int main() {


    std::cin.get();
}
