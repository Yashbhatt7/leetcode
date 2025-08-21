#include<iostream>

std::string interpret(std::string command) {
    std::string str = "";

    for (int i = 0; i < command.size(); ++i) {
        if (command[i] == 'G') {
            str.push_back('G');
        } else if (command[i] == '(' && command[i + 1] == ')') {
            str.push_back('o');
            i += 1;
        } else {
            str.push_back('a');
            str.push_back('l');
            i += 3;
        }
    }

    return str;
}

int main() {
    std::string command = "G()(al)";

    std::cout << interpret(command);

    std::cin.get();
}

