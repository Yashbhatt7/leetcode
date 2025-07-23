#include<iostream>
#include<vector>

int finalValueAfterOperations(std::vector<std::string>& operations) {
    int result = 0;

    for(const std::string& i : operations)  {
        if(i[1] == '-') --result;
        else ++result;
    }

    return result;
}

int main() {
    std::vector<std::string> operations = { "--X", "X++", "X++" };

    std::cout << finalValueAfterOperations(operations);

    std::cin.get();
}


