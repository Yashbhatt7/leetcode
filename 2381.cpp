#include<iostream>
#include<vector>

std::string shiftingLetters(std::string s, std::vector<std::vector<int>>& shifts){
    for(int i = 0; i < shifts.size(); ++i) {
        for(int j = shifts[i][0]; j <= shifts[i][1]; ++j) {
            if(shifts[i][2] == 0) {
                if(s[j] == 'a') {
                    s[j] = 'z';
                } else {
                    int a = s[j] - 1;
                    s[j] = a;
                }
            } else {
                if(s[j] == 'z') {
                    s[j] = 'a';
                } else {
                    int b = s[j] + 1;
                    s[j] = b;
                }
            }
        }
    }
    return s;
}

int main() {
    std::string str = "abc";
    std::vector<std::vector<int>> shifts = {
        { 0,1,0 },
        { 1,2,1 },
        { 0,2,1 },
    };

    std::string str1 = "dztz";
    std::vector<std::vector<int>> shifts1 = {
        { 0,0,0 },
        { 1,1,1 },
        /*{ 0,2,1 },*/
    };

    /*std::cout << shiftingLetters(str, shifts);*/
    std::cout << shiftingLetters(str1, shifts1);

    std::cin.get();
}
