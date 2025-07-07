#include<iostream>
#include<vector>
#include<algorithm>

int maxEvents(std::vector<std::vector<int>>& events) {
    std::sort(events.begin(), events.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1];
    });

    std::vector<bool> free(10000001, false);

    int count = 0;
    for(auto& event : events) {
        for(int day = event[0]; day <= event[1]; ++day) {
            if(!free[day]) {
                free[day] = true;
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    std::vector<std::vector<int>> events = { {1,2}, {1,1}, {2,3}, {3,4} };
    // std::vector<std::vector<int>> events = { {1,2},{2,3},{3,4} };

    std::cout << maxEvents(events);

    std::cin.get();
}


