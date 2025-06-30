#include<iostream>
#include<vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode()
        : val(0), next(nullptr) {}

    ListNode(int x)
        : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next)
        : val(x), next(next) {}
};

class Solution {
public:
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {


        return inserted_list;
    }
};

int main() {


    std::cin.get();
}



