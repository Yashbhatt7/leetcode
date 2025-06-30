#include<iostream>
#include<vector>
#include<string>

std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> vec(n);

    for(int i = 0; i < n; ++i)
    {
        if((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
            vec[i] = "FizzBuzz";
        }
        else if((i + 1) % 3 == 0) {
            vec[i] = "Fizz";
        }
        else if((i + 1) % 5 == 0) {
            vec[i] = "Buzz";
        }
        else
        {
            vec[i] = std::to_string(i + 1);
        }
    }
    return vec;
}

int main() {
    int n = 0;
    std::cin >> n;

    std::vector vec = fizzBuzz(n);

    for(std::string i : vec)
    {
        std::cout << i << " ";
    }

    std::cin.get();
}
