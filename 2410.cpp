#include<iostream>
#include<vector>
#include<algorithm>

int matchPlayersAndTrainers(std::vector<double>& players, std::vector<double>& trainers) {
    int count = 0;

    std::sort(trainers.begin(), trainers.end());
    std::sort(players.begin(), players.end());

    int i = 0;
    int j = 0;
    while(i < players.size() && j < trainers.size()) {
        if(players[i] <= trainers[j]) {
            ++count;
            ++j;
            ++i;
        }
        else {
            ++j;
        }
    }

        return count;}

int main() {
    std::vector<double> players = { 4,7,9 };
    std::vector<double> trainers = { 8,2,5,8 };

    std::cout << matchPlayersAndTrainers(players, trainers);

    std::cin.get();
}


