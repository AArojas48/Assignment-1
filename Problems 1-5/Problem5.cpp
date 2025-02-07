//
//  Problem5.cpp
//  Problem 5
//
//  Created by Alexis Rojas on 2/5/25.
//

#include <iostream>
#include <algorithm>
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

    ListNode* one = new ListNode(1);
    one->next = new ListNode(4);
    one->next->next = new ListNode(5);
    
    ListNode* two = new ListNode(1);
    two->next = new ListNode(3);
    two->next->next = new ListNode(4);
    
    ListNode* three = new ListNode(2);
    three->next = new ListNode(6);
    
    ListNode* list[] = {one, two, three};

    int size = 0;
    int l = sizeof(list) / sizeof(list[0]);

    for(int i = 0; i < l; i++) {
        ListNode* temp = list[i];
        while(temp) {
            size++;
            temp = temp->next;
        }
    }
    
    int* arr = new int[size];
    int index = 0;
    
    for(int i = 0; i < l; i++) {
        ListNode* temp = list[i];
        while(temp) {
            arr[index++] = temp->value;
            temp = temp->next;
        }
    }
    sort(arr, arr + size);
    
    ListNode* newList = new ListNode(0);
    ListNode* curr = newList;
    
    for(int i = 0; i < size; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    
    ListNode* merged = newList->next;
    while(merged) {
        cout << merged->value;
        if(merged->next) {
            cout << "->";
        }
        merged = merged->next;
    }
    cout << endl;
    
    delete[] arr;
    
    return 0;
}
