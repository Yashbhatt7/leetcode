#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> answerQueries(std::vector<int>& nums, std::vector<int>& queries) {
    std::vector<int> answer;
    int sum = 0;
    int count = 0;

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < queries.size(); ++i) {
        count = 0;
        sum = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] <= queries[i]) {
                sum += nums[j];
                std::cout << "sum: " << sum << "\n";
                ++count;
                if(sum > queries[i]) {
                    --count;
                    break;
                }
                else if(sum == queries[i]) {
                    break;
                }
            }
        }
        answer.push_back(count);
    }

    return answer;
}

int main() {
    std::vector<int> nums = { 4,5,2,1 };
    std::vector<int> queries = { 3,10,21 };

    std::vector<int> vec = answerQueries(nums, queries);

    for(const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}


