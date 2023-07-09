#include<iostream>
#include<memory>
#include<cassert>
#include<vector>
using namespace std;
/*
If a node contains data member that acts as a pointer to another node, then many
nodes can be strung together to make linked list
*/

/* Singly linked list
if a node has link only to its successor
*/

/**
 * @brief Class to create node
 * 
 */
class Node{
    public:
        Node(){
            next = 0;
        }
        Node(int i){
                info = i; 
                next = nullptr;

        }
        int info;
        
        std::shared_ptr<Node>next;
};

/**
 * @brief This is to manage linked list
 * 
 */
class Node_list{
    
    public:
        Node_list(){
            head = nullptr;
            tail = nullptr;
        };

        /**
         * @brief Adding a pointer to head
         * 
         */
        void add_to_head(std::shared_ptr<Node>p){
          if (head){
                auto tmp = p;  // make a temporary ptr
                head = tmp->next; 
                tmp.reset();
          }
          else{
            head  = p;
            tail = p;
            }
            // p.reset(); // removing unwanted pointers

        }

        void add_to_tail(std::shared_ptr<Node>p){
            if (head){
                    tail->next = p;
                    tail = tail->next; // updating tail
            }else{
                head = p;
                tail = p;
            }
            p.reset(); // removing unwanted pointers
        }

        int pop_head(){
            assert(head != nullptr); // terminate if head is nullptr
            auto tmp = head->info;

            if (head->next){    
                head = head->next;
                return tmp;

            }else{
                cout<<" Head is empty!\n"<<endl;
                head = nullptr;
                tail = nullptr;
            }
            
            return tmp;
        }

        int pop_tail(){
            assert(tail != nullptr); // terminate if tail is nullptr
            auto tmp = tail->info;
            auto i = head;
            while(i->next != tail){
                i = i->next;  // serching for second last node
            }
            tail = i;
            tail->next = nullptr;

            return tmp;

        }

        std::shared_ptr<Node> head;
        std::shared_ptr<Node> tail;
        
};

template<class T>
Node_list build_list(vector<T>A){
    Node_list nodes;    
    for (int i{};i<A.size(); i++){
        auto p = make_shared<Node>(A[i]);
        nodes.add_to_tail(p);
    }
    return nodes;

};


void view_list(Node_list nodes){
    auto curr = nodes.head;
    while(curr->next != nullptr){
        std::cout<<curr->info<<'\n';
        curr = curr->next;
    }
}

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


ListNode* build_l(vector<int>v){
    ListNode* head = new ListNode(v[0]);
    ListNode* curr = head;

    for (int i = 1; i < v.size();i++){
    
        curr->next = new ListNode(v[i]);
        curr = curr->next;
    }
    
    return head;
}


vector<int> listToVector(ListNode *head){

    vector<int>l{};

    while(head){
        l.push_back(head->val);
        head = head->next;
    }
    return l;
}   