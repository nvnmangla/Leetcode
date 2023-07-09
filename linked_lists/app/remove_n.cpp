#include "utils.hpp"
#include<vector>

ListNode* removeNthFromEnd(ListNode* head, int n) {

    // ListNode* fast = head;
    ListNode* fast = head;
    ListNode* slow = head;
    int count{};

    for (int i = 0; i <n+1; i++) {
        if(fast==nullptr){
            return head->next;
        }
        fast = fast->next;
    }


    while(fast){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;

    return head;
}



int main(){

    vector<int>nodes = {1,2,3,4,5};
    auto head  =  build_l(nodes);
    
    cout<<removeNthFromEnd(head,2)->val<<"\n";


    return 0;
}