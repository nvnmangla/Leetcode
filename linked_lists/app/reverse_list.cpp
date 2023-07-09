#include<utils.hpp>
#include<iostream>
#include<vector>

using namespace std;


ListNode* reverseList(ListNode* head) {

    ListNode* curr = head;
    ListNode* prev = nullptr;


    
    while(curr->next != nullptr) {        

        auto next = head->next;
        head = next;
        curr->next = prev;
        prev = curr;
        curr = head;
        }
        
    return prev;
    }
    