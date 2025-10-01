#include<iostream>

int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottles = empty / numExchange;
        total += newBottles;
        empty = empty % numExchange + newBottles;
    }

    return total;
}

int main() {
    int numBottles = 15;
    int numExchange = 4;

    std::cout << numWaterBottles(numBottles, numExchange) << "\n";

    std::cout << 6 % 4 + 3;

    std::cin.get();
}

