#include<iostream>

std::string largestGoodInteger(std::string num) {
    std::string temp_ans = "";
    std::string max = "";

    for (int i = 0; i < num.size() - 2; ++i) {
        if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
            temp_ans = num.substr(i, 3);
            if (max < temp_ans) {
                max = temp_ans;
            }
            i += 2;
        }
    }
    return max;
}

int main() {
    std::string num = "6777133339";

    std::cout << largestGoodInteger(num);

    std::cin.get();
}


