#include<iostream>
#include<vector>

std::vector<int> memLeak(int memory1, int memory2) {
    int time = 1;
    while(true) {
        if(memory2 > memory1) {
            if(time > memory2) break;
            memory2 -= time;
        } else {
            if(time > memory1) break;
            memory1 -= time;
        } ++time;
        // std::cout << "mem1: " << memory1 << "         mem2: " << memory2 << "\n";
    }
    std::vector<int> result = {time, memory1, memory2};
    return result;
}

int main() {
    int memory1 = 9;
    int memory2 = 6;

    std::vector<int> vec = memLeak(memory1, memory2);

    for(const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}


