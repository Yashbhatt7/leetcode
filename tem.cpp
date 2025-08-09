#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Result {
    int temp;   // how many we processed before hitting >2 distinct
    int check;  // how many before reaching 2 distinct
    vector<int>::iterator next_pos; // where to start next time
};

Result freq_cal(vector<int>::iterator start, vector<int>::iterator end) {
    Result res;
    res.temp = 0;
    res.check = 0;
    unordered_map<int, int> freq;

    auto it = start;
    for (; it != end; ++it) {
        ++freq[*it];
        ++res.temp;
        if (freq.size() < 2) {
            ++res.check;
        }
        if (freq.size() > 2) {
            // remove last element effect
            if (--freq[*it] == 0) {
                freq.erase(*it);
            }
            --res.temp; // step back count
            break;
        }
    }

    std::cout << "check: " << res.check << "\n";

    res.next_pos = it; // save position for next round
    return res;
}

int totalFruit(vector<int>& fruits) {
    int max_len = 0;
    auto current = fruits.begin();

    while (current != fruits.end()) {
        Result res = freq_cal(current, fruits.end());

        if (max_len < res.temp) {
            max_len = res.temp;
        }

        // Move start pointer forward by check count
        current += res.check;
    }

    return max_len;
}

int main() {
    vector<int> fruits = {3,3,3,1,2,1,1,2,3,3,4};
    cout << totalFruit(fruits) << "\n";
}

