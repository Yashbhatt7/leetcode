#include<iostream>
#include<vector>

struct ListNode {
    int val;
    ListNode *next;
};

void reorderList(ListNode* head) {
    std::vector<int> vec;

    ListNode* temp = head;
    while (temp != nullptr) {
        vec.push_back(temp->val);
        temp = temp->next;
    }

    std::vector<int> secVec;
    int left = 0;
    int right = vec.size() - 1;

    while (left < right) {
        secVec.push_back(vec[left++]);
        secVec.push_back(vec[right--]);
    }

    if (left == right) {
        secVec.push_back(vec[left]);
    }

    int i = 0;
    while (i < secVec.size()) {
        head->val = secVec[i];
        head = head->next;
        ++i;
    }
}

int main() {


    std::cin.get();
}
