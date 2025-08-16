#include<iostream>
#include<string>
#include<sstream>

int maximum69Number (int num) {
    std::string n = std::to_string(num);
    std::string temp = n;
    int max = num;

    for (int i = 0; i < n.size(); ++i) {
        if (n[i] == '9') {
            temp[i] = '6';
        } else {
            temp[i] = '9';
        }
        int temp0 = std::stoi(temp);

        if (max < temp0) {
            max = temp0;
        }
        temp = n;
    }

    return max;
}

int main() {
    int num = 9999;

    std::cout << maximum69Number(num);

    std::cin.get();
}
