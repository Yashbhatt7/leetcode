#include<iostream>
#include<vector>
#include<algorithm>

int matchPlayersAndTrainers(std::vector<double>& players, std::vector<double>& trainers) {
    int count = 0;

    std::sort(trainers.begin(), trainers.end());
    std::sort(players.begin(), players.end());

    for(int i = 0; i < players.size(); ++i) {
        for(int j = 0; j < trainers.size(); ++j) {
            if( players[i] <= trainers[j]) {
                if(!trainers.empty()) {
                    trainers.erase(trainers.begin() + j);
                    ++count;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    std::vector<double> players = { 4,7,9 };
    std::vector<double> trainers = { 8,2,5,8 };

    std::cout << matchPlayersAndTrainers(players, trainers);

    std::cin.get();
}


