#include<iostream>
#include<vector>
#include<numeric>

int calPoints(std::vector<std::string>& operations) {
    std::vector<int> vec;

    for (int i = 0; i < operations.size(); ++i) {
        if (operations[i] == "D") {
            if (!vec.empty()) {
                vec.push_back(vec.back() * 2);
            }
        }
        else if (operations[i] == "C") {
            if (!vec.empty()) {
                vec.pop_back();
            }
        }
        else if (operations[i] == "+") {
            if (vec.size() >= 2) {
                vec.push_back(vec[vec.size() - 1] + vec[vec.size() - 2]);
            }
        }
        else {
            vec.push_back(std::stoi(operations[i]));
        }
    }

    return std::accumulate(vec.begin(), vec.end(), 0);
}

int main() {
    std::vector<std::string> ops = { "5","2","C","D","+" };

    std::cout << calPoints(ops);

    std::cin.get();
}
