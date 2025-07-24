#include<iostream>
#include<cmath>

bool checkPowersOfThree(int n) {
    int i = 0;
    int sum = 0;
    while(true) {
        int a = std::pow(3, i);
        if(a >= n) {
        start:
            if(i < 0) {
                break;
            }
            int b = std::pow(3, i);
            sum += b;
            if(sum == n) {
                return true;
            }
            else if(sum > n) {
                sum -= b;
                --i;
                goto start;
            }
            else {
                --i;
                goto start;
            }
        }
        else {
            ++i;
        }
    }
    return false;
}

int main() {
    int n = 91;

    std::cout << checkPowersOfThree(n);
    std::cin.get();
}


