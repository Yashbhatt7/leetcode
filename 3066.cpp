#include <iostream>
#include <vector>
#include <queue>

int min_operations(std::vector<long long>& nums, int k) {
    std::priority_queue<long long, std::vector<long long>, std::greater<long long>> pr_queue(nums.begin(), nums.end());
    int opr_count = 0;

    int i = 0;
    while(pr_queue.top() < k && pr_queue.size() >= 2) {
        std::cout << "loop: " << i << "\n";
        long long first = pr_queue.top();
        pr_queue.pop();

        long long second = pr_queue.top();
        pr_queue.pop();

        long long temp = static_cast<long long>(first) * 2 + second;
        pr_queue.push(temp);

        ++opr_count;
    }

    if(pr_queue.top() >= k) {
        return opr_count;
    }

    return -1;
}

int main() {
    /*std::vector<int> nums = {2, 11, 10, 1, 3};*/
    std::vector<long long> nums = { 1000000000,999999999,1000000000,999999999,1000000000,999999999 };
    long long k = 1000000000;

    std::cout << min_operations(nums, k);

    return 0;
}

