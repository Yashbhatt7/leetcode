#include<iostream>
#include<vector>

std::vector<int> minOperations(std::string boxes) {
    std::vector<int> operations(boxes.size());
    int count = 0;

    for(int i = 0; i < operations.size(); ++i) {
        for(int j = i; j < boxes.size() - 1; ++j) {
            ++count;
            if(boxes[j + 1] == '1') {
                operations[i] += count;
            }
        }
        count = 0;
    }

    for(int k = operations.size() - 1; k >= 0; --k) {
        for(int l = k; l > 0; --l) {
            ++count;
            if(boxes[l - 1] == '1') {
                operations[k] += count;
            }
        }
        count = 0;
    }

    return operations;
}

int main() {
    std::string boxes = "001011";

    std::vector<int> operations = minOperations(boxes);

    /*std::cout << operations[0];*/

    for(int i : operations)
    {
        std::cout << i << " ";
    }

    std::cin.get();
}
