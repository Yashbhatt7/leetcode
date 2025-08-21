#include<iostream>
#include <unordered_map>
#include<vector>

struct TrieNode {
    std::string name;
    std::unordered_map<std::string, TrieNode*> children;
    bool marked = false;
    std::string hash;

    void insertPath(TrieNode* root, const std::vector<std::string>& path) {
        TrieNode* node = root;
        for (const auto& part: path) {
            if (node->children.find(part) == node->children.end()) {
                node->children[part] = new TrieNode{part};
            }
            node = node->children[part];
        }
    }
};


int main() {


    std::cin.get();
}

