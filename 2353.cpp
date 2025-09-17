#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>

class FoodRatings {
private:
    std::unordered_map<std::string, std::pair<std::string, int>> foodInfo;
    std::unordered_map<std::string, std::set<std::pair<int, std::string>>> cuisineFoods;

public:
    FoodRatings(std::vector<std::string>& foods, std::vector<std::string>& cuisines, std::vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i) {
            foodInfo[foods[i]] = { cuisines[i], ratings[i] };
            cuisineFoods[cuisines[i]].insert({ -ratings[i], foods[i] });
        }
    }

    void changeRating(std::string food, int newRating) {
        auto [cuisine, prevRating] = foodInfo[food];
        cuisineFoods[cuisine].erase({ -prevRating, food });
        cuisineFoods[cuisine].insert({ -newRating, food });
        foodInfo[food].second = newRating;
    }

    std::string highestRated(std::string cuisine) {
        auto best = cuisineFoods[cuisine].begin();
        return best->second;
    }
};

int main() {


    std::cin.get();
}

