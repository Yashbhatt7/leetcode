#include<iostream>
#include<functional>
#include<thread>

class FizzBuzz {
private:
    int n;

public:
    FizzBuzz(int n) {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(std::function<void()> printFizz) {
        printFizz();
    }

    // printBuzz() outputs "buzz".
    void buzz(std::function<void()> printBuzz) {
        printBuzz();
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(std::function<void()> printFizzBuzz) {
        printFizzBuzz();
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(int i, std::function<void(int)> printNumber) {
        printNumber(i);
    }
};

void print() {
    for(int )
}

int main() {
    int n;
    std::cin >> n;

    FizzBuzz obj;

    std::cin.get();
}


