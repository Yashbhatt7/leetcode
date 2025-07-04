#include<iostream>
#include<vector>

char kthCharacter(long long k, std::vector<int>& operations) {
    std::string str = "aabb";

    std::string temp = str;

    long long i = 0;
    for(i = 0; i < operations.size(); ++i) {
        if(operations[i] == 1) {
            for(long long j = 0; j < temp.size(); ++j) {
                ++temp[j];
            }
        }
        str.append(temp);
        temp = str;
    }

    return str[k - 1];
}

int main() {
    long long k = 12145134613;
    std::vector<int> operations = { 0,0,0,0,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1 };

    std::cout << kthCharacter(k, operations);

    std::cin.get();
}
