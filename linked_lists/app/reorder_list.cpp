#include "utils.hpp"
#include<vector>


ListNode* reverseList(ListNode* head) {
        
    ListNode* curr = head;
    ListNode* prev = nullptr;
    
    while(curr->next != nullptr) {        
        auto next = head->next;
        head = next;
        curr->next = prev;
        prev = curr;
        curr = head;   }
    
    return prev;

    }
    

void reorderList(ListNode* head) {
        
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next) {
                fast = fast->next->next;
                slow = slow->next;
        }

        auto first = head;
        auto second = reverseList(slow->next);

        while(second || first) {

                auto* temp1 = first->next;
                auto* temp2 = second->next;
                first->next = second;
                second->next = temp1;
                first = temp1;
                second = temp2;

        }
    
}
