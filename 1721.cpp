#include<iostream>
#include<vector>
#include<algorithm>

class ListNode {
public:
    ListNode* next;
    int val;
};

ListNode* swapNodes(ListNode* head, int k) {
    std::vector<int> vec;
    ListNode* currNode = head;

    while (currNode != nullptr) {
        vec.push_back(currNode->val);
        currNode = currNode->next;
    }

    std::swap(vec[k - 1], vec[vec.size() - k]);

    currNode = head;
    int i = 0;
    while (currNode != nullptr) {
        std::cout << "vec: " << vec[i] << "\n";
        currNode->val = vec[i];
        currNode = currNode->next;
        ++i;
    }
    currNode = head;

    return currNode;
}

int main() {
    int k = 2;
    ListNode* n1 = new ListNode();
    ListNode* n2 = new ListNode();
    ListNode* n3 = new ListNode();
    ListNode* n4 = new ListNode();
    ListNode* n5 = new ListNode();

    ListNode* head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = nullptr;

    head->val = 34;
    n1->val = 35;
    n2->val = 36;
    n3->val = 37;
    n4->val = 38;
    n5->val = 39;

    swapNodes(head, k);

    std::cin.get();
}
