#include<iostream>
#include<vector>
#include<algorithm>

int numberOfBeams(std::vector<std::string>& bank) {
    int beams = 0;
    int res = 0;

    std::vector<int> temp;

    for(int i = 0; i < bank.size(); ++i) {
        int count = std::count(bank[i].begin(), bank[i].end(), '1');

        if(count != 0) {
            temp.push_back(count);
        }
    }


    if(!temp.empty()) {
        for (int i = 0; i < temp.size() - 1; ++i) {
            beams += temp[i] * temp[i + 1];
        }
    }

    return beams;
}

int main() {
    // std::vector<std::string> bank = { "011001","000000","010100","001000" };
    std::vector<std::string> bank = { "0" };

    std::cout << "\n" << numberOfBeams(bank);

    std::cin.get();
}


