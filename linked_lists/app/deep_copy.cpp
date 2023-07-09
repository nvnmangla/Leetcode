#include<utils.hpp>
#include<iostream>
#include<vector>

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


Node* copyRandomList(Node* head) {
    Node* copy  = new Node(0);    
    Node * curr = copy;
    while(head){
        copy->val = head->val;
        copy->next = head->next;
        copy->random = head->random;
        head = head->next;
        copy->next = head;
    }
    return curr;
}




