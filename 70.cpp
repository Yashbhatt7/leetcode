#include<iostream>

int climbStairs(int n)
{
    if(n <= 3)
        return n;

    int fix_a = 2;
    int fix_b = 3;

    int sum_of_last_two = 0;

    for(int i = 3; i < n; ++i)
    {
        sum_of_last_two = fix_a + fix_b;
        fix_a = fix_b;
        fix_b = sum_of_last_two;
    }
    return sum_of_last_two;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << climbStairs(n);

    std::cin.get();
}
