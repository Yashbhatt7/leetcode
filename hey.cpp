#include<iostream>
#include<vector>
#include<numeric>

long long minCost(std::vector<int>& basket1, std::vector<int>& basket2) {
    int total1 = std::accumulate(basket1.begin(), basket1.end(), 0);
    int total2 = std::accumulate(basket2.begin(), basket2.end(), 0);
    int diff = std::abs(total1 - total2);

    std::cout << "diff: " << diff << "\n";

    if (diff % 2 != 0) {
        return -1;
    }

    int new_dif = 0;
    int temp1 = 0;
    int temp2 = 0;
    int m_cost = 0;
    if(total1 > total2) {
        for (int i = 0; i < basket1.size(); ++i) {
            if(!(diff > basket1[i])) {
                continue;
            }

            std::cout << "asdf";

            temp1 = basket1[i];
            for (int j = 0; j < basket2.size(); ++j) {
                if(basket2[i] == diff - 1 || basket2[i] == diff + 1) {
                    std::cout << "no way no way ....\n";
                    temp2 = basket2[i];
                    basket2[i] = temp1;
                    basket1[i] = temp2;
                    m_cost += std::min(basket1[i], basket2[i]);
                    std::cout << "m_cost: " << m_cost << "\n";
                }
                total1 = std::accumulate(basket1.begin(), basket1.end(), 0);
                total2 = std::accumulate(basket2.begin(), basket2.end(), 0);
                if(total1 == total2) {
                    return m_cost;
                }
            }
        }
    } else {
        for (int i = 0; i < basket1.size(); ++i) {
            if(!(diff > basket2[i])) {
                continue;
            }

            std::cout << "asdf";

            temp1 = basket2[i];
            for (int j = 0; j < basket1.size(); ++j) {

                if(basket1[i] == diff - 1 || basket1[i] == diff + 1) {
                    std::cout << "no way no way ....\n";
                    temp2 = basket1[i];
                    basket1[i] = temp1;
                    basket2[i] = temp2;
                    m_cost += std::min(basket1[i], basket2[i]);
                    std::cout << "m_cost: " << m_cost << "\n";
                }
                total1 = std::accumulate(basket1.begin(), basket1.end(), 0);
                total2 = std::accumulate(basket2.begin(), basket2.end(), 0);
                if(total1 == total2) {
                    return m_cost;
                }
            }
        }
    }

    return m_cost;
}

int main() {
    // std::vector<int> basket1 = { 4, 4, 4, 4, 3 };
    // std::vector<int> basket2 = { 5, 5, 5, 5, 3 };

    std::vector<int> basket1 = { 4,2,2,2 };
    std::vector<int> basket2 = { 1,4,1,2 };

    std::cout << minCost(basket1, basket2);

    std::cin.get();
}
