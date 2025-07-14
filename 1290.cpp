#include<iostream>
#include<cmath>

class ListNode {
public:
    ListNode *next;
    int val;

    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

int getDecimalValue(ListNode* head) {
    if(head == NULL) {
        return 0;
    }
    int size = 0;
    ListNode *temp = head;

    while(temp != NULL) {
        ++size;
        temp = temp->next;
    }

    if(size == 1 && head->val == 0) {
        return 0;
    }
    int sum = 0;
    int result = 0;
    size = size - 1;
    int i = size;
    while(head != NULL) {
        result += head->val * pow(2, i);
        std::cout << "result: " << result << " ";
        head = head->next;
        --i;
    }
    return result;
}

int main() {


    std::cin.get();
}

