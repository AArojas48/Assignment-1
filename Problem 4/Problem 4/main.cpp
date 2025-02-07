//
//  main.cpp
//  Problem 4
//
//  Created by Alexis Rojas on 2/6/25.
//

#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    ListNode(int x) {
        value = x;
        next = nullptr;
    }
};

int main(int argc, const char * argv[]) {
    
    ListNode* head = new ListNode(12);
    head->next = new ListNode(24);
    head->next->next = new ListNode(36);
    head->next->next->next = new ListNode(49);
    head->next->next->next->next = new ListNode(69);
    
    ListNode* temp = head;
    
    int n = 2;
    
    int size = 0;
    temp = head;
    while(temp) {
        size++;
        temp = temp->next;
    }
    
    int deletion = size - n;
    
    if(deletion == 0) {
        ListNode* node = head;
        head = head->next;
        delete node;
    }
    else {
        temp = head;
        for(int i = 0; i < deletion - 1; ++i) {
            temp = temp->next;
        }
        ListNode* node = temp->next;
        temp->next = temp->next->next;
        delete node;
    }
    cout << "Output: ";
    temp = head;
    while(temp) {
        cout << temp->value << ", ";
        temp = temp->next;
    }
    while(head) {
        ListNode* node2 = head;
        head = head->next;
        delete node2;
    }
    
    return 0;
}
